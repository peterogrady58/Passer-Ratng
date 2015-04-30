//
//  MasterViewController.h
//  Passer Ratng
//
//  Created by O'Gradys on 2015-04-30.
//  Copyright (c) 2015 O'Gradys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

