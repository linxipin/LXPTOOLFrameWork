//
//  LXP_TimeHelp.h
//  TimeHelpObject
//
//  Created by 林希品 on 2017/11/6.
//  Copyright © 2017年 林希品. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LXP_TimeHelp : NSObject

//1. 获得当前的时间(NSDate):

+ (NSDate *)currentDate;


//2. 获取从某个日期开始往前或者往后多久的日期(NSDate):

+ (NSDate *)specificDate;


//3. 按照一定的格式获得当前的时间(NSString):

+ (NSString *)currentString;


//4. 获得当前时间的时间戳(NSInteger):

+ (NSInteger)currentTimeStamp;


//5. 时间戳转化为时间(NSInteger --> NSDate):

+(NSDate *)timeStampChangeToDate:(NSInteger)timeStamp;


//6. 时间转化为时间戳(NSDate --> NSInteger):

+ (NSInteger)dateChangeToTimestamp:(NSDate *)date;


//7. 格式化的时间转化为时间戳

+ (NSString *)dateChangeTime:(NSString *)dateString;


//8. 获得某一时间为星期几(NSDate --> NSString):

+ (NSString *)getWeekDayByDate:(NSDate *)date;


//9. 时间转化为农历表示(NSDate --> NSString):

+(NSString*)getChineseCalendarWithDate:(NSDate *)date;




#pragma mark  NSString -> NSDate
+ (NSDate *)dateFromString:(NSString *)dateString;

#pragma mark - NSDate -> NSString
+ (NSString *)stringFromDate:(NSDate *)date;



@end
