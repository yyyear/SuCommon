//
//  SuStringUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuStringUtil : NSObject

+ (NSString*) toCamelCase:(NSString*)origin;

+ (NSInteger) parseCodeFromVersion:(NSString*)version base:(NSUInteger)base limit:(NSUInteger)limit;

+ (NSInteger) parseCodeFromVersion:(NSString*)version;

+ (NSInteger) parseMajorFromVersion:(NSString*)version;

@end

NS_ASSUME_NONNULL_END
