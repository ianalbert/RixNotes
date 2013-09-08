//
//  RXCompatibility.h
//  RixNotes
//
//  Created by Ian Albert on 2013-09-07.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import <Foundation/Foundation.h>

// Issue deprecation warnings when we try to call APIs that are newer than our
// minimum supported version.
//
// To suppress an individual warning:
// #pragma clang diagnostic push
// #pragma clang diagnostic ignored "-Wdeprecated-declarations"
// ...statements...
// #pragma clang diagnostic pop
//
// Adapted from https://github.com/mattjgalloway/MJGFoundation/blob/master/Source/Utilities/MJGAvailability.h

#define __RX_AVAILABILITY_TOO_NEW __attribute__((deprecated("API is not backward compatible with this app's minimum supported iOS version"))) __attribute__((weak_import))

#undef __AVAILABILITY_INTERNAL__IPHONE_5_1
#define __AVAILABILITY_INTERNAL__IPHONE_5_1 __RX_AVAILABILITY_TOO_NEW

#undef __AVAILABILITY_INTERNAL__IPHONE_6_0
#define __AVAILABILITY_INTERNAL__IPHONE_6_0 __RX_AVAILABILITY_TOO_NEW

#undef __AVAILABILITY_INTERNAL__IPHONE_6_1
#define __AVAILABILITY_INTERNAL__IPHONE_6_1 __RX_AVAILABILITY_TOO_NEW

#undef __AVAILABILITY_INTERNAL__IPHONE_7_0
#define __AVAILABILITY_INTERNAL__IPHONE_7_0 __RX_AVAILABILITY_TOO_NEW

#undef __AVAILABILITY_INTERNAL__IPHONE_7_1
#define __AVAILABILITY_INTERNAL__IPHONE_7_1 __RX_AVAILABILITY_TOO_NEW
