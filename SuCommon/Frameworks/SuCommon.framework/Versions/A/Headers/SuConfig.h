//
//  Config.h
//  SuCommon
//
//  Created by bo yin on 2020/7/6.
//  Copyright © 2020 com.sugame. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SuConfigOnUpdate)(NSDictionary* data);

@interface SuConfig : NSObject

@property (nonatomic, weak) SuConfigOnUpdate onUpdate;

- (instancetype) initWithUrl:(NSString*)url pubid:(NSString*)pubid moduleid:(NSString*)moduleid sdkVersionCode:(NSInteger)sdkVersionCode sdkVersionName:(NSString*)sdkVersionName;

- (NSDictionary*) get;

- (NSDictionary*) startWithDelay:(long long)delay interval:(long long)interval;

- (void) stop;

@end

NS_ASSUME_NONNULL_END
