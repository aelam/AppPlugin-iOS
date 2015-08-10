//
//  DetailViewController.h
//  AppSettings
//
//  Created by ryan on 15/8/10.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

