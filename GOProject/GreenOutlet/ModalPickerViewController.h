//
//  ModalPickerViewController.h
//  GreenOutlet
//
//  Created by Joshua Lane on 11/8/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModePickerOptions.h"

@interface ModalPickerViewController : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) IBOutlet
    UIPickerView *picker;


@property (weak, nonatomic) IBOutlet UILabel *selectedLabel;
@property (weak, nonatomic) IBOutlet UIPickerView *modeSelector;
@property (strong) ModePickerOptions *modeMod;



- (IBAction) dismissPickerView;

@end
