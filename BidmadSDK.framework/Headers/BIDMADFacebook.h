//
//  BIDMADFacebook.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"
#import "BIDMADRewardVideo.h"
//@import FBAudienceNetwork;
#if __has_include("FBAudienceNetwork/FBAudienceNetwork.h")
#import "FBAudienceNetwork/FBAudienceNetwork.h"
#define FBSDK_EXIST
#endif

@class BIDMADBanner;
@class BIDMADInterstitial;
@class BIDMADRewardVideo;

#ifdef FBSDK_EXIST
@interface BIDMADFacebook : NSObject<FBAdViewDelegate,FBInterstitialAdDelegate, FBRewardedVideoAdDelegate>
#else
@interface BIDMADFacebook : NSObject
#endif


@property (strong,nonatomic) BIDMADBanner* banner;
@property (strong,nonatomic) BIDMADInterstitial* interstitial;
@property (strong,nonatomic) BIDMADRewardVideo* rewardVideo;
#ifdef FBBIDDINGSDK_EXIST
@property(strong, nonatomic)FBRewardedVideoAd*  rewardAds;
#endif

- (id)initWithFBAds:(NSDictionary *)dic bidmadBanner:(BIDMADBanner *)banner;
- (id)initWithFBInterstital:(NSDictionary *)dic bidmadInterstitial:(BIDMADInterstitial *)interstitial;
- (id)initWithFBRewardVideo:(NSDictionary *)dic bidmadRewardVideo:(BIDMADRewardVideo *)rewardVideo;
- (void)showBannerAds:(BIDMADBanner *)pv parentViewController:(UIViewController *)pvc;
- (void)showInterstitialAds:(UIViewController *)pvc;
- (void)showRewardVideo:(UIViewController *)pvc;
- (void)removeBannerAds;
- (void)removeIntertitialAds;
//- (void)removeRewardAds;
- (void)gogoInterstitial;
- (void)gogoRewardVideo;
@end
