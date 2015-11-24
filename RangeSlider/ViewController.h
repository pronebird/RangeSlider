//
//  ViewController.h
//  RangeSlider
//
//  Created by pronebird on 11/23/15.
//  Copyright © 2015 pronebird. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RangeSlider.h"

@interface ViewController : UIViewController

@property (nonatomic) IBOutlet UILabel *leftLabel;
@property (nonatomic) IBOutlet UILabel *rightLabel;
@property (nonatomic) IBOutlet RangeSlider *rangeSlider;

@end

