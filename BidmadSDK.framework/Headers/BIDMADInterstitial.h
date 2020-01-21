//
//  BIDMADInterstitial.h
//  BIDMADSDK
//
//  Created by 김선정 on 2015. 7. 15..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADFacebook.h"
#import "BIDMADFacebookBidding.h"
#import "BIDMADAdmanager.h"
#import "BIDMADAdmob.h"
#import "BIDMADCauly.h"
#import "BIDMADAtomInterstitial.h"
#import "BIDMADMintegral.h"

@protocol BIDMADInterstitialDelegate;

@interface BIDMADInterstitial : NSObject

@property (nonatomic, strong) id<BIDMADInterstitialDelegate> delegate;

@property (nonatomic, strong) UIViewController* parentViewController;

@property (strong, nonatomic) NSDictionary*             ads_dic;
@property (nonatomic) BOOL                     isDirectLoad;
@property (strong,nonatomic) NSString*                     isFBB;

@property (strong, nonatomic) NSDictionary*                      ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                    change_info;
@property (strong, nonatomic) NSDictionary*                    date;

@property (nonatomic) int mediationNumber;

@property (nonatomic) BOOL                       isLabelService;
@property (nonatomic) BOOL                       isLabelServiceAdmin;

///inititalize
- (id)init;

///InterstitialView Load
- (void)loadInterstitialView;

///InterstitialView Show
- (void)showInterstitialView;

///InterstitialView Direct Show
- (void)directShowInterstitialView;

/// 삭제할것
- (void)selectAds:(NSDictionary *)lv_dic;

- (void)removeInterstitialADS;

@end

@protocol BIDMADInterstitialDelegate <NSObject>

@optional

- (void)BIDMADInterstitialAllFail:(BIDMADInterstitial *)core;

/// PREPARED INTERSTITIAL VIEW
- (void)BIDMADInterstitialLoad:(BIDMADInterstitial *)core;

/// ERROR
- (void)BIDMADInterstitialError:(BIDMADInterstitial *)core code:(NSString *)error;

/// CLOSE INTERSTITIAL VIEW
- (void)BIDMADInterstitialClose:(BIDMADInterstitial *)core;

/// SHOW INTERSTITIAL VIEW
- (void)BIDMADInterstitialShow:(BIDMADInterstitial *)core;

@end
