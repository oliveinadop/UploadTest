//
//  BIDMADRewardVideo.h
//  BidmadSDK
//
//  Created by 김선정 on 2018. 10. 29..
//  Copyright © 2018년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADFacebook.h"
#import "BIDMADAtomReward.h"
#import "BIDMADFacebookBidding.h"
#import "BIDMADAdmob.h"
#import "BIDMADAdmanager.h"
#import "BIDMADMintegral.h"
#import "BIDMADAdColony.h"
#import "BIDMADUnityAds.h"
#import "BIDMADAppLoving.h"

//NS_ASSUME_NONNULL_BEGIN

@protocol BIDMADRewardVideoDelegate;

@interface BIDMADRewardVideo : NSObject

@property (nonatomic, strong) id<BIDMADRewardVideoDelegate> delegate;

@property (nonatomic, strong) UIViewController*             parentViewController;

@property (strong, nonatomic) NSDictionary*                 ads_dic;

@property (strong, nonatomic) NSDictionary*                      ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;

@property (nonatomic) int mediationNumber;

@property (nonatomic) BOOL isDirectLoad;

@property (nonatomic, strong) NSString* userId;

@property (strong,nonatomic) NSString*                      isFBB;

@property (nonatomic) BOOL                       isLabelService;
@property (nonatomic) BOOL                       isLabelServiceAdmin;
@property (nonatomic) BOOL                       testMode;
@property (nonatomic) BOOL                       isComplete;


///inititalize
- (id)init;

///InterstitialView Load
- (void)loadRewardVideo;

///InterstitialView Show
- (void)showRewardVideo;

- (void)directShowRewardView;
/// 삭제할것
- (void)selectAds:(NSDictionary *)lv_dic;

//- (void)removeRewardVideo;

@end

@protocol BIDMADRewardVideoDelegate <NSObject>

@optional

- (void)BIDMADRewardVideoAllFail:(BIDMADRewardVideo *)core;

/// PREPARED INTERSTITIAL VIEW
- (void)BIDMADRewardVideoLoad:(BIDMADRewardVideo *)core;

/// ERROR
- (void)BIDMADRewardVideoError:(BIDMADRewardVideo *)core code:(NSString *)error;

/// CLOSE INTERSTITIAL VIEW
- (void)BIDMADRewardVideoClose:(BIDMADRewardVideo *)core;

/// SHOW INTERSTITIAL VIEW
- (void)BIDMADRewardVideoShow:(BIDMADRewardVideo *)core;

/// COMPLETE REWARD VIDEO
- (void)BIDMADRewardVideoComplete:(BIDMADRewardVideo *)core;

/// CLICK REWARD VIDEO
- (void)BIDMADRewardVideoClick:(BIDMADRewardVideo *)core;

/// CLICK REWARD VIDEO
- (void)BIDMADRewardVideoSucceed:(BIDMADRewardVideo *)core;

/// SKIP RERWARD VIDEO
- (void)BIDMADRewardSkipped:(BIDMADRewardVideo *) core;

@end
