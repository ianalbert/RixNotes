//
//  RXMacros.h
//  RixNotes
//
//  Created by Ian Albert on 2013-09-07.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import <Foundation/Foundation.h>

#define RX_DISABLED_INIT @throw [NSException exceptionWithName:NSInternalInconsistencyException reason:@"Singleton cannot be initialized. Use +sharedInstance" userInfo:nil];\
return nil
