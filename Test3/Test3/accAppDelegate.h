//
//  accAppDelegate.h
//  Test3
//
//  Created by Vitaliy Ilin on 19.02.13.
//  Copyright (c) 2013 acceptic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface accAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
