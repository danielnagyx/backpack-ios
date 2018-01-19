/*
 * Backpack - Skyscanner's Design System
 *
 * Copyright 2018 Skyscanner Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
const gulp = require('gulp')
const nunjucks = require('gulp-nunjucks');
const data = require('gulp-data');
const rename = require('gulp-rename');
const merge2 = require('merge2');
const del = require('del');
const path = require('path');
const _ = require('lodash');
const tinycolor = require('tinycolor2');
const tokens = require('bpk-tokens/tokens/base.ios.json');

const PATHS = {
  templates: path.join(__dirname, 'templates'),
  output: path.join(__dirname, 'Backpack', 'Classes'),
};

const TYPES = new Set(['color', 'font']);
const VALID_TEXT_STYLES = new Set(['xs', 'sm', 'base', 'lg', 'xl']);
const WEIGHT_MAP = {
  normal: 'UIFontWeightRegular',
  bold: 'UIFontWeightBold',
  100: 'UIFontWeightUltraLight',
  200: 'UIFontWeightThin',
  300: 'UIFontWeightLight',
  400: 'UIFontWeightRegular',
  500: 'UIFontWeightMedium',
  600: 'UIFontWeightSemibold',
  700: 'UIFontWeightBold',
  800: 'UIFontWeightHeavy',
  900: 'UIFontWeightBlack',
};

const format = (s) => s[0].toUpperCase() + _.camelCase(s.substring(1));

const parseColor = (color) => {
  const parsedColor = tinycolor(color);

  const { r, g, b, a } = parsedColor.toRgb();

  return {
    r: (r / 255.0).toFixed(3),
    g: (g / 255.0).toFixed(3),
    b: (b / 255.0).toFixed(3),
    a,
  };
};

const hexColor = (color) => {
  const parsedColor = tinycolor(color);

  return parsedColor.toHexString();
};

const convertFontWeight = (weightString) => {
  const weight = WEIGHT_MAP[weightString.trim()];

  if(!weight) {
    throw new Error(`Invalid weight string \`${weightString}\``);
  }

  return weight;
};

const parseTokens = (tokensData) => {
  const colors = _
                  .chain(tokensData.properties)
                  .filter(({ type }) => type === 'color')
                  .map(({ value, ...rest }) => ({ value: parseColor(value), ...rest, hex: hexColor(value) }))
                  .value();

  const emphazisedWeight = convertFontWeight(
    _.filter(tokensData.properties, ({ name }) => name === 'textEmphasizedFontWeight')[0].value
  );
  const fonts = _
                  .chain(tokensData.properties)
                  .filter(({ category }) => category === 'font-sizes' || category === 'font-weights')
                  .groupBy(({ name }) => name.replace('FontSize', '').replace('FontWeight', ''))
                  .map((values, key) => [values, key])
                  .filter((data) => VALID_TEXT_STYLES.has(data[1].replace('text', '').toLowerCase()))
                  .map((data) => {
                    const properties = data[0];
                    const key = data[1];

                    const sizeProp = _.filter(properties, ({ category }) => category === 'font-sizes');
                    const weightProp = _.filter(properties, ({ category }) => category === 'font-weights');

                    if (sizeProp.length !== 1 || weightProp.length !== 1) {
                      throw new Error('Expected all text sizes to have both a weight and font size');
                    }


                    return {
                      name: key,
                      size: Number.parseInt(sizeProp[0].value, 10),
                      weight: convertFontWeight(weightProp[0].value),
                      type: 'font',
                    };
                  })
                  .flatMap(properties =>
                    [properties, { ...properties, weight: emphazisedWeight, name: properties.name + 'Emphasized' }]
                  )
                  .value();

  return _
           .chain([...colors, ...fonts])
           .groupBy(({ type }) => type)
           .value();
};


gulp.task('template', () => {
  let streams = [];
  const templateData = parseTokens(tokens);

  for (let type of TYPES) {
    const processedType = format(type);

    streams.push(
      gulp.src(path.join(PATHS.templates, `BPK${processedType}.h.njk`))
      .pipe(data(() => templateData))
      .pipe(nunjucks.compile())
      .pipe(rename(`${processedType}/Generated/BPK${processedType}.h`))
    );

    streams.push(
      gulp.src(path.join(PATHS.templates, `BPK${processedType}.m.njk`))
      .pipe(data(() => templateData))
      .pipe(nunjucks.compile())
      .pipe(rename(`${processedType}/Generated/BPK${processedType}.m`))
    );
  }

  return merge2(streams).pipe(gulp.dest(PATHS.output))
});

gulp.task('default', ['template']);
gulp.task('clean', () => del([PATHS.output], { force: true }));
