#import <UIKit/UIKit.h>

#import "BCOVPlayerSDK.h"
#import "IMAAdsRenderingSettings.h"

@protocol BrightcovePlayerPluginViewDelegate <NSObject>

@optional
- (void)playerShown;
- (void)playerHidden:(NSString *)position;
- (void)playVideo:(NSString *)position withDuration:(NSString *)duration;
- (void)pauseVideo:(NSString *)position;
- (void)seekingVideo;
- (void)seekedVideo;
- (void)bufferingVideo;
- (void)endedVideo;
- (void)adStarted;
- (void)adCompleted;
- (void)allAdsCompleted;
@end

@interface BrightcovePluginViewController : UIViewController <BCOVPlaybackControllerDelegate, IMAWebOpenerDelegate>
- (void)requestContentFromCatalog;
- (void)setup;
@property (nonatomic, strong) id delegate;
@property NSString * kViewControllerCatalogToken;
@property NSString * kViewControllerVideoID;
@property NSString * kViewControllerReferenceID;
@property NSString * kViewControllerIMALanguage;
@property NSString * kViewControllerIMAVMAPResponseAdTag;
@property NSString * kViewControllerVideoURL;
@end