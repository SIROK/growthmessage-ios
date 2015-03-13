//
//  GrowthMessage.h
//  GrowthMessage
//
//  Created by Naoyuki Kataoka on 2015/03/02.
//  Copyright (c) 2015年 SIROK, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GrowthbeatCore.h"
#import "GrowthMessageDelegate.h"
#import "GMMessageHandler.h"
#import "GMButton.h"

@interface GrowthMessage : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign) id<GrowthMessageDelegate> delegate;
@property (nonatomic, strong) NSArray *messageHandlers;
@property (nonatomic, strong) NSArray *intentHandlers;

- (void)initializeWithApplicationId:(NSString *)applicationId credentialId:(NSString *)credentialId;

- (void)openMessageIfAvailable;

- (void)didSelectButton:(GMButton*)button message:(GMMessage*)message;

- (GBLogger *)logger;
- (GBHttpClient *)httpClient;
- (GBPreference *)preference;


@end
