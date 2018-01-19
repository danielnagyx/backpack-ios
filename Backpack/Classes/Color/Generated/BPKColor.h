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
#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
@class UIColor;
/**
  BPKColor is the entry point for the Backpack color palette. It expose the whole palette
  as static methods.
*/
@interface BPKColor: NSObject

///-----------------------
/// @name Colors
///-----------------------

/**
  The `shadowSmColor` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)shadowSmColor;

/**
  The `shadowLgColor` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)shadowLgColor;

/**
  The `shadowXlColor` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)shadowXlColor;

/**
  The `colorWhite` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffffff; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorWhite;

/**
  The `colorBlue50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #e1f4f8; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue50;

/**
  The `colorBlue100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #cbeef5; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue100;

/**
  The `colorBlue200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #b0e4ee; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue200;

/**
  The `colorBlue300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #7fd7e8; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue300;

/**
  The `colorBlue400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #40c4df; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue400;

/**
  The `colorBlue500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #00b2d6; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue500;

/**
  The `colorBlue600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #009dbd; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue600;

/**
  The `colorBlue700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #008ca8; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue700;

/**
  The `colorBlue800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #00758c; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue800;

/**
  The `colorBlue900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #005567; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorBlue900;

/**
  The `colorGray50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #f3f2f5; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray50;

/**
  The `colorGray100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #e6e4eb; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray100;

/**
  The `colorGray200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ccc9d4; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray200;

/**
  The `colorGray300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #b2aebd; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray300;

/**
  The `colorGray400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #9a95a7; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray400;

/**
  The `colorGray500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #817b8f; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray500;

/**
  The `colorGray600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #696179; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray600;

/**
  The `colorGray700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #524c61; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray700;

/**
  The `colorGray800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #3b344b; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray800;

/**
  The `colorGray900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGray900;

/**
  The `colorGreen50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #dff7ec; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen50;

/**
  The `colorGreen100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #cbf5e2; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen100;

/**
  The `colorGreen200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #afedd1; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen200;

/**
  The `colorGreen300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #80e8b9; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen300;

/**
  The `colorGreen400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #40de97; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen400;

/**
  The `colorGreen500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #00d775; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen500;

/**
  The `colorGreen600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #00bd68; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen600;

/**
  The `colorGreen700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #00a85d; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen700;

/**
  The `colorGreen800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #008c4d; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen800;

/**
  The `colorGreen900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #006638; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorGreen900;

/**
  The `colorRed50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fcf2f2; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed50;

/**
  The `colorRed100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffd6d5; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed100;

/**
  The `colorRed200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffbbba; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed200;

/**
  The `colorRed300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ff9694; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed300;

/**
  The `colorRed400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fe7471; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed400;

/**
  The `colorRed500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ff5452; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed500;

/**
  The `colorRed600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #eb423f; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed600;

/**
  The `colorRed700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #de322f; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed700;

/**
  The `colorRed800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #cc1f1d; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed800;

/**
  The `colorRed900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #a80300; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorRed900;

/**
  The `colorYellow50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fff9e6; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow50;

/**
  The `colorYellow100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fff3cf; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow100;

/**
  The `colorYellow200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffecb8; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow200;

/**
  The `colorYellow300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffe18c; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow300;

/**
  The `colorYellow400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffcf4a; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow400;

/**
  The `colorYellow500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffbb00; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow500;

/**
  The `colorYellow600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #f0b000; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow600;

/**
  The `colorYellow700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #e1a500; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow700;

/**
  The `colorYellow800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #c28e00; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow800;

/**
  The `colorYellow900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #9c7200; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorYellow900;

/**
  The `colorPink50` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fde4ed; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink50;

/**
  The `colorPink100` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ffbfd7; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink100;

/**
  The `colorPink200` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ff94bb; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink200;

/**
  The `colorPink300` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ff73a6; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink300;

/**
  The `colorPink400` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #ff619b; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink400;

/**
  The `colorPink500` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #fa488a; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink500;

/**
  The `colorPink600` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #d92b6b; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink600;

/**
  The `colorPink700` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #c50f52; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink700;

/**
  The `colorPink800` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #b00c48; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink800;

/**
  The `colorPink900` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #94053a; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)colorPink900;

/**
  The `underlayColor` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)underlayColor;

/**
  The `touchableOverlayColor` color from the Backpack palette.

  <div style="width: 100px; height: 100px; background: #252033; box-shadow: 0px 1px 3px 0px rgba(37,32,31,.3); border-radius: 6px;"></div>
*/
+ (UIColor *)touchableOverlayColor;

@end
NS_ASSUME_NONNULL_END
