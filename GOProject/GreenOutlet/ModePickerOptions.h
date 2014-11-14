//
//  ModePickerOptions.h
//  GreenOutlet
//
//  Created by Joshua Lane on 11/12/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import <Foundation/Foundation.h>

#define WELCOME_S "Choose a device mode."

#define OPTION1_S "Manual"
#define OPTION2_S "Sensor"
#define OPTION3_S "Algorithm"

#define NUM_OPTIONS 3

@interface ModePickerOptions : NSObject

@property (readonly) NSArray *modeArray;

@end