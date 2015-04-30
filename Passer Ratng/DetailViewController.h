//
//  DetailViewController.h
//  Passer Ratng
//
//  Created by O'Gradys on 2015-04-30.
//  Copyright (c) 2015 O'Gradys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

