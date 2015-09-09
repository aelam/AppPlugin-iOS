//
//  PlugableApp.h
//  AppSettings
//
//  Created by ryan on 15/8/10.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@protocol RWPlugableApp <NSObject>

- (NSString *)appName;
- (NSString *)appIdentifier;
- (NSString *)appVersion;

- (NSArray *)patterns;
- (void)installApp;
- (void)uninstallApp;

- (id)webviewScripts;


@optional


@end

@interface RWPlugableApp : NSObject <RWPlugableApp, UIApplicationDelegate>

@end
