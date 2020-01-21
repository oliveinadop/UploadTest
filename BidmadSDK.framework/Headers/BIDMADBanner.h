//
//  BIDMADBanner.h
//  BIDMADMobileAds
//
//  Created by 김선정 on 2015. 7. 13..
//  Copyright (c) 2015년 ADOP Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BIDMADUtil.h"
#import "BIDMADSetting.h"
#import "BIDMADFacebook.h"
#import "BIDMADCauly.h"
#import "BIDMADAtom.h"
#import "BIDMADFacebookBidding.h"
#import "BIDMADAdmob.h"
#import "BIDMADAdmanager.h"

@protocol BIDMADBannerDelegate;
@interface BIDMADBanner : UIView

@property (assign, nonatomic) SEL                       requestSelector;
@property (strong, nonatomic) NSDictionary*             ads_dic;
@property (strong,nonatomic) NSString*                  isFBB;
@property (nonatomic) bannerSizeType            bannerType;
@property (strong, nonatomic) id<BIDMADBannerDelegate>    delegate;

@property (strong, nonatomic) NSDictionary*                      ecmp_rev_info;
@property (strong, nonatomic) NSDictionary*                      area_info;

@property (strong, nonatomic) NSDictionary*                   change_info;
@property (strong, nonatomic) NSDictionary*                   date;

@property (nonatomic) int mediationNumber;

@property (nonatomic) BOOL                       isLabelService;

@property (nonatomic) BOOL                      isLabelServiceAdmin;

@property (nonatomic) float                      arpmYpoint;

/// INITIALIZE ADS
- (id)initWithParentViewController:(UIViewController *)parentVC adsPosition:(CGPoint)point;

/// REQUEST ADS
- (void)requestBannerView;

/// DELETE ADS
- (void)removeAds;

- (void)selectAds:(NSDictionary *)lv_dic isAdsExist:(BOOL)isAds;

-(void) runAds;

@end

@protocol BIDMADBannerDelegate <NSObject>

@optional

- (void)BIDMADBannerAllFail:(BIDMADBanner *)core;

- (void)BIDMADBannerError:(BIDMADBanner *)core code:(NSString *)error;

/// CLOSE BANNER VIEW
- (void)BIDMADBannerClosed:(BIDMADBanner *)core;

/// SHOW BANNER VIEW
- (void)BIDMADBannerShow:(BIDMADBanner *)core;

/// LOAD BANNER VIEW
- (void)BIDMADBannerLoad:(BIDMADBanner *)core;

@end
