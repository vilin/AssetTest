//
//  accDetailViewController.h
//  Test3
//
//  Created by Vitaliy Ilin on 19.02.13.
//  Copyright (c) 2013 acceptic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface accDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
