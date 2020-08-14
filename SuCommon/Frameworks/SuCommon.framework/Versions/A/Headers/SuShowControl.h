//
//  SuShowControl.h
//  SuCommon
//
//  Created by bo yin on 2020/8/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuShowControl : NSObject

@property (nonatomic, readonly, strong) NSUserDefaults* userDefaults;

@property (nonatomic, readonly, strong) NSString* timeKey;

@property (nonatomic, readonly, strong) NSString* dailyCountKey;

@property (nonatomic, readonly, assign) long long interval;

@property (nonatomic, readonly, assign) int dailyCountLimit;

- (instancetype) initWith:(NSUserDefaults*)userDefaults timeKey:(NSString*)timeKey interval:(long long)interval dailyCountKey:(NSString*)dailyCountKey dailyCountLimit:(int)dailyCountLimit;

- (BOOL) checkInterval:(long long)current;

- (BOOL) checkDailyCount:(long long)current;

- (BOOL) check:(long long)current;

- (BOOL) check;

- (void) commit:(long long)current;

- (void) commit;

- (long long) lastTime;

- (int) dailyCount;

@end

NS_ASSUME_NONNULL_END
