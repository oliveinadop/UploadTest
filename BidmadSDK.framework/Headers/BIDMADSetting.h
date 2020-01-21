//
//  AdopMobileAds.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

//@import GoogleMobileAds;

#import <Foundation/Foundation.h>

#define CAULY           @"5d0d57c2-11db-4ef1-b6b7-ae0fca302a63"
#define GOOGLE_ADMANAGER     @"41350b05-4415-44b2-8e17-b5fe52d1bd6e"
#define GOOGLE_ADMOB    @"ce56da00-1a18-11e9-9ed2-02c31b446301"
#define REAL_CLICK      @"6cb439f3-9f2a-4f92-9cbc-8f3bf8b154eb"
#define FACEBOOK        @"9868ea6b-5afd-11e7-8214-02c31b446301"
#define SMATTO          @"21e6eb8c-8174-4768-a631-f6974cbd13c8"
#define MOBFOX          @"ea03d8dd-336c-4ad3-880a-8c4eb013a6b5"
#define LINKMINE        @"bd59aee9-8878-11e7-8214-02c31b446301"
#define ADOPAPP         @"2d4833cf-330b-11e8-bbc3-02c31b446301"
#define FACEBOOKBIDDING @"dc93051a-a4e6-11e8-bbc3-02c31b446301"
#define MINTEGRAL       @"1b7d485c-de41-11e8-9ed2-02c31b446301"
#define YOUAPPI         @"7c87e0a7-fe81-11e8-9ed2-02c31b446301"
#define ADOPREWARD          @"143e7311-4538-11e9-9e1d-02c31b446301"



#define ADOCOLONY     @"e0d7c94e-d391-11e9-9e1d-02c31b446301"
#define ADOUNITY      @"2e88609b-d916-11e9-9e1d-02c31b446301"
#define APPLOVIN      @"b45c4d16-fa13-11e9-9e1d-02c31b446301"



#define COMPASS_SERVING @"https://compass.adop.cc/serving/ms.php"
#define COMPASS_SERVING_TEST @"http://compasstest.adop.cc/serving/mServing.php"

#define BIDMAD_ARPM_URL @"https://one.adop.cc/compass/auth/changeMediationByBidmad/"
#define BIDMAD_ARPM_URL_TEST @"http://10.10.40.99:8080/auth/changeMediationByBidmad/"

#define BIDMAD_APPINFO_URL @"https://appinfo.adop.cc/app_collect.php"

#define ATOM_VIDEO_LOG_URL(type,u,g,c,cm,ta,i,ig,ar,tp,pa,pf,pp,rg,ty) [NSString stringWithFormat:@"https://atomvideolog.adop.cc/%@?u=%@&g=%@&c=%@&cm=%@&ta=%@&i=%@&ig=%@&ar=%@&tp=%@&pa=%@&pf=%@&pp=%@&rg=%@&ty=%@",type,u,g,c,cm,ta,i,ig,ar,tp,pa,pf,pp,rg,ty]

#define IS_REWARDED @"IsRewarded"

//#define IS_COMPASS_TEST
//#define IS_NOT_ADMIN
//#define IS_DEBUG

typedef enum
{
    banner_cauly = 9980,
    banner_google,
    banner_lguplus,
    banner_n2s,
    banner_interactivy,
    banner_remon,
    banner_united,
    banner_syrubad,
    banner_inmobi
}bannerType;

typedef enum
{
    banner_320_50 = 3747,
    banner_300_250
}bannerSizeType;

@interface BIDMADSetting : NSObject

+ (BIDMADSetting *)sharedInstance;

///  Auto Loading Interval.
@property (nonatomic, assign) int                   refreshInterval;

/// user's age. ex) 27
@property (nonatomic, assign) int                   age;

@property (nonatomic)bool                           isDebug;

/// BIDMAD INTERSTITIAL ADS ZONE ID
@property (nonatomic, strong) NSString*             interstitialZoneID;

/// BIDMAD REWARD ADS ZONE ID
@property (nonatomic, strong) NSString*             rewardZoneID;

/// BIDMAD BANNER ADS ZONE ID
@property (nonatomic, strong) NSString*             bannerZoneID;

/// user's gender. ex) male = m / female = f
@property (nonatomic, strong) NSString*             gender;

/// keywords. ex) sports, cars, finance, football
@property (nonatomic, strong) NSString*             keyword;

/// HouseBannerURL
@property (nonatomic, strong) NSString*             houseBannerURL;

/// 경도
@property (nonatomic, assign) float                 longitude;

/// 위도
@property (nonatomic, assign) float                 latitude;

//광고 노출 전 하우스 배너 노출 여부
@property (nonatomic) BOOL                       isPreviewHouse;

//customHouseBanner
@property (nonatomic, strong) NSString*          houseBannerPath;

@property (nonatomic)  bool unityState;

@property (nonatomic) bool isRewardCompleteInSetting;

@end
