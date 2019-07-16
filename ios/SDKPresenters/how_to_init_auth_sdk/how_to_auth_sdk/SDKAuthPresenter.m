//
//  SDKAuthPresenter.m
//  MobileRTCSample
//
//  Created by Murray Li on 2018/11/15.
//  Copyright © 2018 Zoom Video Communications, Inc. All rights reserved.
//

#import "SDKAuthPresenter.h"
#import "SDKAuthPresenter+AuthDelegate.h"

@implementation SDKAuthPresenter

- (void)SDKAuth
{
    MobileRTCAuthService *authService = [[MobileRTC sharedRTC] getAuthService];
    if (authService)
    {
        authService.delegate = self;
        
        authService.clientKey = @"abJ6tEGa7PfXZ4C10wA7XS1rSAxhrznazHPn";
        authService.clientSecret = @"5aUYoHDywZ1CjxiECGHSbJrFLczTxkQZxcgg";
        
        [authService sdkAuth];
    }
}

#pragma mark - AlertView Delegate

- (void)alertView:(UIAlertView *)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex
{
    if (buttonIndex != alertView.cancelButtonIndex)
    {
        [self performSelector:@selector(SDKAuth) withObject:nil afterDelay:0.f];
    }
}

@end
