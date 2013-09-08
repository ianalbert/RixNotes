//
//  RXAppDelegate.h
//  RixNotes
//
//  Created by Ian Albert on 2013-09-06.
//  Copyright (c) 2013 Ian Albert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RXAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
