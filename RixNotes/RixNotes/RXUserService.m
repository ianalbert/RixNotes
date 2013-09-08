//
//  RXUserService.m
//  RixNotes
//
//  Created by Ian Albert on 2013-09-07.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import "RXUserService.h"

@implementation RXUserService

- (id)init
{
    RX_DISABLED_INIT;
}

- (id)initPrivate
{
    self = [super init];
    if (self) {
        //
    }
    return self;
}

+ (RXUserService*)sharedInstance
{
    static RXUserService* instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RXUserService alloc] initPrivate];
    });
    return instance;
}

@end
