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

/**
 *  Set minimum and maximum range at the same time.
 *  This helps to avoid validation errors when setting each
 *  of components separately.
 *
 *  @param minimumRange
 *  @param maximumRange
 */
- (void)setMinimumRange:(CGFloat)minimumRange maximumRange:(CGFloat)maximumRange;


/**
 *  Set minimum and maximum value at the same time.
 *  This helps to avoid validation errors when setting each
 *  of components separately.
 *
 *  @param minimumValue
 *  @param maximumValue
 */
- (void)setMinimumValue:(CGFloat)minimumValue maximumValue:(CGFloat)maximumValue;

@end
