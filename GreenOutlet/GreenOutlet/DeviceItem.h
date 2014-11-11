//
//  DeviceItem.h
//  GreenOutlet
//
//  Created by Joshua Lane on 11/8/14.
//  Copyright (c) 2014 Joshua Lane. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceItem : NSObject

@property NSString *deviceName;
@property BOOL isOn;
@property NSString *mode;
- (void)markAsOn:(BOOL)isOn;


@end
