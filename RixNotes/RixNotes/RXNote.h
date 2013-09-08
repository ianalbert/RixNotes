//
//  RXNote.h
//  RixNotes
//
//  Created by Ian Albert on 2013-09-06.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import "RXRemoteObject.h"

@interface RXNote : RXRemoteObject

@property (nonatomic, copy) NSString* title;
@property (nonatomic, strong, readonly) NSDate* createdDate;
@property (nonatomic, strong, readonly) NSDate* lastUpdatedDate;

@end
