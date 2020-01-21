//
//  BIDMADMintegral.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 11. 7..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include("MTGSDK/MTGSDK.h")
#import "MTGSDK/MTGSDK.h"
#import "MTGSDKReward/MTGRewardAdManager.h"
#import "MTGSDKInterstitialVideo/MTGInterstitialVideoAdManager.h"

#define MTGSDK_EXIST
#endif

#import "BIDMADLabelView.h"
#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"
#import "BIDMADRewardVideo.h"
#import "BIDMADSetting.h"
#import "BIDMADUtil.h"
NS_ASSUME_NONNULL_BEGIN

@class BIDMADRewardVideo;
@class BIDMADInterstitial;

#ifdef MTGSDK_EXIST
@interface BIDMADMintegral : NSObject<MTGInterstitialVideoDelegate,MTGRewardAdLoadDelegate,MTGRewardAdShowDelegate>
#else
@interface BIDMADMintegral : NSObject
#endif

@property (strong,nonatomic) BIDMADInterstitial* interstitial;
@property (strong,nonatomic) BIDMADRewardVideo* rewardVideo;

- (id)initWithInterstitial:(NSDictionary *)dic bidmadInterstitial:(BIDMADInterstitial *)interstitial;
- (id)initWithRewardVideo:(NSDictionary *)dic bidmadReward:(BIDMADRewardVideo *)rewardVideo;

- (void)showMtgInterstitial:(UIViewController *)pvc;
- (void)showMtgRewardVideo:(UIViewController *)pvc;

- (void)removeInterstitialAds;

- (void)gogoInterstitial;
- (void)gogoRewardVideo;
@end

NS_ASSUME_NONNULL_END
