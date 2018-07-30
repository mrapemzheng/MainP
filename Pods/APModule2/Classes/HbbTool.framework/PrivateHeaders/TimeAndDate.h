//
//  TimeAndDate.h
//  HBB_BuyerProject
//
//  Created by MIDE on 15/12/29.
//  Copyright © 2015年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimeAndDate : NSObject
+(NSDate *)getPriousorDateFromDate:(NSDate *)date withDate:(int)day;
+(NSString *)getCurrentDateAndTimeNSString;
+(NSString *)getCurrentDateAndTime;
//将秒数转换为时分秒
+(NSString *)secondChangeToTime:(int)seconds;
@end
