//
//  SuEncodingUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/23.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuEncodingUtil : NSObject

+ (NSData*) aes:(CCOperation)operation data:(NSData*)data key:(NSString*)keyHex iv:(NSString*)ivHex;

+ (NSData*) inflate:(NSData*)data;

+ (NSData*) deflate:(NSData*)data;

+ (NSString*) bin2hex:(NSData*)bin;

+ (NSData*) hex2bin:(NSString*)hex;

+ (NSData*) md5:(NSData*)data;

+ (NSString*) md5hex:(NSData*)data;

@end

NS_ASSUME_NONNULL_END
