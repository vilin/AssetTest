//
//  accMasterViewController.h
//  Test3
//
//  Created by Vitaliy Ilin on 19.02.13.
//  Copyright (c) 2013 acceptic. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface accMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
