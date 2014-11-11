//
//  ModalPickerViewController.m
//  GreenOutlet
//
//  Created by Joshua Lane on 11/8/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import "ModalPickerViewController.h"

@interface ModalPickerViewController ()
{
   NSArray *_pickerData;
}
@end

@implementation ModalPickerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
        
        // Initialize Data
        _pickerData = @[@"Manual Mode", @"Sensor Mode", @"Algorithim Mode"];
    self.picker.dataSource = self;
    self.picker.delegate = self;
    }


- (IBAction) dismissPickerView
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

// The number of columns of data
- (int)numberOfComponentsInPickerView:(UIPickerView *)pickerView
{
    return 1;
}

// The number of rows of data
- (int)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component
{
    return _pickerData.count;
}

// The data to return for the row and component (column) that's being passed in
- (NSString*)pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component
{
    return _pickerData[row];
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
