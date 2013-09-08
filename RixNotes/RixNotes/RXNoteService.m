//
//  RXNoteService.m
//  RixNotes
//
//  Created by Ian Albert on 2013-09-07.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import "RXNoteService.h"

@implementation RXNoteService

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

+ (RXNoteService*)sharedInstance
{
    static RXNoteService* instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RXNoteService alloc] initPrivate];
    });
    return instance;
}

@end
