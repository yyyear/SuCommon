//
//  SuDeviceUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuDeviceUtil : NSObject

+ (NSString*) getSystemInfoMachine;

+ (long long) getFirstInstallTime;

+ (long long) getLastUpdateTime;

+ (NSString*) getPackageName;

+ (NSString*) getVersionName;

+ (NSString*) getVersionBuild;

+ (NSInteger) calculateBucketId:(NSString*)string;

+ (NSString*) loadUserAgent;

@end

NS_ASSUME_NONNULL_END
