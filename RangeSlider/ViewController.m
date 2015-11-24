//
//  ViewController.m
//  RangeSlider
//
//  Created by pronebird on 11/23/15.
//  Copyright © 2015 pronebird. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self updateLabels];
}

- (IBAction)valueChanged:(id)sender {
    [self updateLabels];
}

- (void)updateLabels {
    self.leftLabel.text = [NSString stringWithFormat:@"%.2f", self.rangeSlider.minimumValue];
    self.rightLabel.text = [NSString stringWithFormat:@"%.2f", self.rangeSlider.maximumValue];
}

@end
