//
//  Events.h
//  BusinessGuy
//
//  Created by Matt Van Veenendaal on 12/4/12.
//  Copyright (c) 2012 Matt Van Veenendaal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Events : NSObject

+ (Events *)sharedInstance;
- (void) registerEvent:(UIEvent*)event;

@end
