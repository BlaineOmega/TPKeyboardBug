//
//  DetailViewController.h
//  TPKeyboardBug
//
//  Created by Blaine on 5/22/13.
//  Copyright (c) 2013 Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
