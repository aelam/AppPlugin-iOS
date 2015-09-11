//
//  JSActionLoader.h
//  AppSettings
//
//  Created by ryan on 15/9/11.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAWebViewController.h"

@class JSActionModule;

@protocol JSActionModule <NSObject>

- (void)installJSModule:(JSActionModule *)module;
- (void)uninstallJSModule:(JSActionModule *)module;


@end

@interface JSActionModuleLoader : NSObject

+ (instancetype)defaultJSActionModuleLoader;

- (void)attachToWebViewController:(SAWebViewController *)webViewController;
- (void)deattachToWebViewController:(SAWebViewController *)webViewController;

@end

