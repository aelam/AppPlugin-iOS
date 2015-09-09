//
//  SAWebViewController+Ext.m
//  AppSettings
//
//  Created by ryan on 15/9/9.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import "SAWebViewController+Ext.h"
#import <JavaScriptCore/JavaScriptCore.h>

@interface SAWebViewController ()

@property (nonatomic, strong) NSDictionary *shareInfo;

@end

@implementation SAWebViewController (Ext)

- (void)loadWebViewExtendJS {
    NSString *jsPath = [[NSBundle mainBundle] pathForResource:@"EMBridge" ofType:@"js"];
    NSString *js = [NSString stringWithContentsOfFile:jsPath encoding:NSUTF8StringEncoding error:nil];
    [[self webViewContext] evaluateScript:js];
}


- (JSContext *)webViewContext {
    JSContext *context = [self valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
    return context;
}

// MARK: Actions
- (void)showMenuItems {
    
}

- (void)hideMenuItems {
    
}

- (void)onMenuShareTimeline:(id)info {
    
}

- (void)showNavigationBar:(BOOL)show {
    
}

- (void)setNavigationBarTitle:(NSString *)title {
    
}

// UI config

@end
