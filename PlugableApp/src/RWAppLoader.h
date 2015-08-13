//
//  RWAppLoader.h
//  AppSettings
//
//  Created by ryan on 15/8/13.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RWPlugableApp;

@interface RWAppLoader : NSObject

+ (instancetype)defaultAppLoader;

- (void)loadApps;
- (void)loadApp:(RWPlugableApp *)app;
- (void)unloadApp:(RWPlugableApp *)app;

- (void)autoDiscoverApps;

@end
