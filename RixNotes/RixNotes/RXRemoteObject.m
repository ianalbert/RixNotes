//
//  RXRemoteObject.m
//  RixNotes
//
//  Created by Ian Albert on 2013-09-06.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import "RXRemoteObject.h"

@implementation RXRemoteObject

- (NSUInteger)hash
{
    return [self.remoteObjectID hash];
}

- (BOOL)isEqual:(id)object
{
    if ([object isKindOfClass:[RXRemoteObject class]]) {
        RXRemoteObject* other = object;
        return [self.remoteObjectID isEqual:other.remoteObjectID];
    }
    return NO;
}

@end
