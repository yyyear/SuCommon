//
//  NSString+StringValueExtension.h
//  SuAd
//
//  Created by bo yin on 2020/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (KeyValueOperation)

- (BOOL) hasKey:(id)key;

- (BOOL) boolForKey:(id)key defaultValue:(BOOL)defaultValue;

- (int) intForKey:(id)key defaultValue:(int)defaultValue;

- (long) longForKey:(id)key defaultValue:(long)defaultValue;

- (long long) longLongForKey:(id)key defaultValue:(long long)defaultValue;

- (NSString*) stringForKey:(id)key defaultValue:(nullable NSString*)defaultValue;

@end

NS_ASSUME_NONNULL_END
