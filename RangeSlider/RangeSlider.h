//
//  RangeSlider.h
//  RangeSlider
//
//  Created by pronebird on 11/23/15.
//  Copyright © 2015 pronebird. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface RangeSlider : UIControl

/**
 *  Minimum value (Default: 0.0)
 */
@property (nonatomic) IBInspectable CGFloat minimumValue;

/**
 *  Maximum value (Default: 1.0)
 */
@property (nonatomic) IBInspectable CGFloat maximumValue;

/**
 *  Minimum range value (Default: 0.0)
 */
@property (nonatomic) IBInspectable CGFloat minimumRange;

/**
 *  Maximum range value (Default: 1.0)
 */
@property (nonatomic) IBInspectable CGFloat maximumRange;

@end
