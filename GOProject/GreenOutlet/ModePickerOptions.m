//
//  ModePickerOptions.m
//  GreenOutlet
//
//  Created by Joshua Lane on 11/12/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import "ModePickerOptions.h"

@implementation ModePickerOptions

-(id) init
{
    self = [super init];
    self->_modeArray = @[@OPTION1_S, @OPTION2_S, @OPTION3_S];
    return self;
}

@end
