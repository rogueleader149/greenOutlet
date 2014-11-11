//
//  ModalPickerViewController.h
//  GreenOutlet
//
//  Created by Joshua Lane on 11/8/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ModalPickerViewController : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) IBOutlet
    UIPickerView *picker;

- (IBAction) dismissPickerView;

@end
