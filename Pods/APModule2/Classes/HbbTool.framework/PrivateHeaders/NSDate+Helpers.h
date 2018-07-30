//
//  NSDate+Helpers.h
//
//
//
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, NSDateTimeZone)
{
    NSDateTimeZoneUTC,
    NSDateTimeZoneGMT,
};

typedef NS_ENUM(NSUInteger, NSDateFormat)
{
    //HH:mm
    NSDateFormatHm24,
    //yyyy-MM
    NSDateFormatY4m,
    //yyyy-MM-dd
    NSDateFormatDmy4,
    //yyyy-MM-dd HH:mm
    NSDateFormatDmy4Hm24,
    //yyyy-MM-dd HH:mm:ss
    NSDateFormatDmy4Hms24,
    //yyyyMMddHHmmss
    NSDateFormatDmy4Hms24NOSeparate,
    //yyyy年MM月dd日
    NSDateFormatDmy4Zh,
};


@interface NSDate (Helpers)

+ (NSDictionary *)timeZoneAbbreviations;
+ (NSTimeZone *)timeZone:(NSDateTimeZone)timeZone;
+ (NSDateFormatter *)dateFormatterWithFormat:(NSDateFormat)format andTimeZone:(NSDateTimeZone)dateTimeZone;

+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSDateFormat)format andTimeZone:(NSDateTimeZone)timeZone;
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSDateFormat)format andTimeZone:(NSDateTimeZone)dateTimeZone;

+ (NSDate *)dateWithoutTime:(NSDate *)dateTime;
+ (NSDate *)nowPlusDays:(NSUInteger)day;

- (BOOL)isEqualToDateIgnoringTime:(NSDate *)otherDate;

/**
 判断是否是同一天
 
 author mige
 */
- (BOOL)isSameDayWithDate:(NSDate *)date;

@end
