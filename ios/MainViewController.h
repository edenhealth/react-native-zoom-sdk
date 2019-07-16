

#define kSDKUserID      @""
#define kSDKUserName    @""
#define kSDKUserToken   @""
#define kSDKMeetNumber  @""
#define kZAK @""
//the following parameters are optional, just for login user
#define kParticipantID  @""
#define kWebinarToken   @""

@interface MainViewController : UIViewController

@property (retain, nonatomic) UIButton *meetButton;
@property (retain, nonatomic) UIButton *joinButton;

@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIButton *settingButton;

/*
@property (retain, nonatomic) IntroViewController  *introVC;
@property (retain, nonatomic) SplashViewController *splashVC;
@property (retain, nonatomic) WebViewController    *webVC;
 
 */

@property (assign, nonatomic) BOOL isSharingWebView;

@property (copy, nonatomic) RTCJoinMeetingActionBlock  joinMeetingBlock;

@end
