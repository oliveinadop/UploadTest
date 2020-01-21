//
//  BIDMADCauly.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CaulyAdView.h"
#import "CaulyInterstitialAd.h"
#import "BIDMADSetting.h"
#import "BIDMADBanner.h"
#import "BIDMADInterstitial.h"

@class BIDMADBanner;
@class BIDMADInterstitial;

@interface BIDMADCauly : NSObject<CaulyAdViewDelegate,CaulyInterstitialAdDelegate>

@property (strong,nonatomic) BIDMADBanner* banner;
@property (strong,nonatomic) BIDMADInterstitial* interstitial;

- (id)initWithAdDic:(NSDictionary *)dic;
- (void)showCaulyBanner:(UIViewController *)pvc;
- (void)showCaulyInterstitial:(UIViewController *)pvc;
- (void)removeBannerAds;
- (void)removeInterstitialAds;
- (void)gogoInterstitial;
@end
