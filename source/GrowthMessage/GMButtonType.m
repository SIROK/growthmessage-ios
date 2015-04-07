//
//  GMButtonType.m
//  GrowthMessage
//
//  Created by Naoyuki Kataoka on 2015/03/17.
//  Copyright (c) 2015年 SIROK, Inc. All rights reserved.
//

#import "GMButtonType.h"

NSString *NSStringFromGMButtonType(GMButtonType buttonType) {

    switch (buttonType) {
        case GMButtonTypeUnknown:
            return nil;
        case GMButtonTypePlain:
            return @"plain";
        case GMButtonTypeImage:
            return @"image";
    }

}

GMButtonType GMButtonTypeFromNSString(NSString *buttonTypeString) {

    if ([buttonTypeString isEqualToString:@"plain"]) {
        return GMButtonTypePlain;
    }
    if ([buttonTypeString isEqualToString:@"image"]) {
        return GMButtonTypeImage;
    }
    return GMButtonTypeUnknown;

}