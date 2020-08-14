//
//  SuTimeUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/8/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuTimeUtil : NSObject

+ (long long) getCurrentTimeMillis;

+ (long long) getUptimeMillis;

+ (BOOL) isSameDay:(long long)time with:(long long)with;

@end

NS_ASSUME_NONNULL_END
