//
//  SqliteUtil.h
//  SuCommon
//
//  Created by bo yin on 2020/7/28.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuSqliteUtil : NSObject

+ (NSObject*) parse:(sqlite3_stmt*)stmt column:(int)column;

+ (NSArray*) parse:(sqlite3_stmt*)stmt;

@end

NS_ASSUME_NONNULL_END
