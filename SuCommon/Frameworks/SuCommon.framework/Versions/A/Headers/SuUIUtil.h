//
//  SuUIUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuUIUtil : NSObject

+ (CGSize) parseSize:(NSString*)size width:(CGFloat)width height:(CGFloat)height;

+ (CGSize) parseSize:(NSString*)size size:(CGSize)sz;

+ (CGSize) parseSize:(NSString*)size;

+ (void) loadImage:(NSString*)url into:(UIView*)view;

+ (void) loadImages:(NSArray*)urls into:(NSArray*)views;

+ (void) loadText:(NSString*)url into:(UIView*)view;

+ (void) loadColor:(UIColor*)color into:(UIView*)view;

+ (void) hidden:(NSArray*)views value:(BOOL)value;

@end

NS_ASSUME_NONNULL_END
