//
//  BIDMADAdx.h
//  BidmadSDK
//
//  Created by 김선정 on 2017. 6. 19..
//  Copyright © 2017년 ADOP Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BIDMADRewardVideo.h"
#import "BIDMADSetting.h"
#import "BIDMADUtil.h"
#import "BIDMADLabelView.h"
#import "UIButton+circle.h"
#import <UnityAds/UnityAds.h>


@class BIDMADRewardVideo;


@interface BIDMADUnityAds : NSObject <UnityAdsDelegate>

@property (strong,nonatomic) BIDMADRewardVideo* rewardVideo;


- (id)initWithRewardVideo:(NSDictionary *)dic bidmadReward:(BIDMADRewardVideo *)rewardVideo userId:(NSString *)userId;
- (void)showUnityAdsRewardVideo:(UIViewController *)pvc;
- (void)gogoRewardVideo;
@end
