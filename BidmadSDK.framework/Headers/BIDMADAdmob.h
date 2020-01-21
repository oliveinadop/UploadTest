//
//  BIDMADAdx.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"
#import "BIDMADRewardVideo.h"
#import "BIDMADSetting.h"
#import "BIDMADUtil.h"
#import "BIDMADLabelView.h"
#import "UIButton+circle.h"
#if __has_include("GoogleMobileAds/GoogleMobileAds.h")
#import "GoogleMobileAds/GoogleMobileAds.h"
#define GOOGLESDK_EXIST
#endif

@class BIDMADBanner;
@class BIDMADInterstitial;
@class BIDMADRewardVideo;

#ifdef GOOGLESDK_EXIST
@interface BIDMADAdmob : NSObject<GADBannerViewDelegate,GADInterstitialDelegate,GADRewardBasedVideoAdDelegate>
#else
@interface BIDMADAdmob : NSObject
#endif

@property (strong,nonatomic) BIDMADBanner* banner;
@property (strong,nonatomic) BIDMADInterstitial* interstitial;
@property (strong,nonatomic) BIDMADRewardVideo* rewardVideo;

- (id)initWithAdBanner:(NSDictionary *)dic bidmadbanner:(BIDMADBanner *)banner;
- (id)initWithInterstitial:(NSDictionary *)dic bidmadInterstitial:(BIDMADInterstitial *)interstitial;
- (id)initWithRewardVideo:(NSDictionary *)dic bidmadReward:(BIDMADRewardVideo *)rewardVideo userId:(NSString *) userId;
- (void)showAdmobBanner:(UIViewController *)pvc;
- (void)showAdmobInterstitial:(UIViewController *)pvc;
- (void)showAdmobRewardVideo:(UIViewController *)pvc;
- (void)removeBannerAds;
- (void)removeInterstitialAds;
- (void)gogoInterstitial;
- (void)gogoRewardVideo;
@end
