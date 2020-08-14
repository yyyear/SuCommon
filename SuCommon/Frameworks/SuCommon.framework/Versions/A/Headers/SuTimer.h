//
//  SuTimer.h
//  SuCommon
//
//  Created by bo yin on 2020/7/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuTimer : NSObject

- (BOOL) running;

- (void) startWithDelay:(long long)delay interval:(long long)interval task:(void (^)(void))task on:(dispatch_queue_t)queue;

- (void) startWithDelay:(long long)delay interval:(long long)interval task:(void (^)(void))task;

- (void) stop;

@end

NS_ASSUME_NONNULL_END
