//
//  SAWebViewController.h
//  AppSettings
//
//  Created by ryan on 15/9/9.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SAWebViewController : UIViewController

@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) Class webViewClass;


// 显示个股
// subclass implement
- (void)openCustomPageWithUserInfo:(NSDictionary *)userInfo;


@end
