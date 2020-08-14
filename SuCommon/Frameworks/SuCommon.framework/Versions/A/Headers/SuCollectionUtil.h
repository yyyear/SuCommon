//
//  SuCollectionUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuCollectionUtil : NSObject

+ (NSMutableArray*) expand:(NSObject*)obj;

+ (NSMutableArray*) shuffle:(NSArray*)array;

@end

NS_ASSUME_NONNULL_END
