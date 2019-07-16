#import <UIKit/UIKit.h>

#define kSDKKey      @"abJ6tEGa7PfXZ4C10wA7XS1rSAxhrznazHPn"
#define kSDKSecret   @"5aUYoHDywZ1CjxiECGHSbJrFLczTxkQZxcgg"
#define kSDKDomain   @""

@interface AppDelegateRTC : UIResponder <UIApplicationDelegate, UIAlertViewDelegate, MobileRTCPremeetingDelegate>

@property (strong, nonatomic) UIWindow *window;

- (UIViewController *)topViewController;
@end
