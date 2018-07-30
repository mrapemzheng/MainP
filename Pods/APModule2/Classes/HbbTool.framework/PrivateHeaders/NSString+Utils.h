//
//  NSString+Utils.h
//  KgOrderSys
//
//  Created by CHENG DE LUO on 14-11-17.
//  Copyright (c) 2014年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Utils)

//判断是否不为空
+ (BOOL)isNotBlank:(NSString *)str;

//判断两个字符串的内容是否相同
+ (BOOL)equalWithString:(NSString *)oneStr anotherStr:(NSString *)anotherStr;
//判断验证码
+ (BOOL)isAuthcodeInputCorrect:(NSString *)authcode;

//判断是否为整型
- (BOOL)isPureInt;

//判断是否为浮点型
- (BOOL)isPureFloat;

//判断是否手机号码
- (BOOL)isPhoneNumber;

//是否为数字
- (BOOL)isPureNumber;

//邮箱
- (BOOL)isEmail;

//转化为拼音
- (NSString *)getSpellingString;

//获取首字母拼音
- (NSString *)getFirstSpellingString;

//获取姓名缩写
- (NSString *)getNameSpellingString;

//是否数字或者被循序符号
- (BOOL)isNumberOrBeAllowedPunctuation;


////获取字符串的长度，中文字符占两个长度
//-  (int)convertToInt;

//获取字符串的字符char长度，中文字符占两个长度 (兼容中文)
-  (NSInteger)getCharacterLength;

/**
 获取字符char范围下的子字符串 (兼容中文)

 @param characterRange 字符范围

 @return 子字符串
 */
- (NSString *)substringWithCharacterRange:(NSRange)characterRange;

////根据传入的限制 获取要截取的位置
//-(int)getPositionToCutByLength:(int )lengthTarght;

#pragma mark - date

//日期对象转化为默认datetime字符串
+ (NSString *)defaultDatetimeStringWithDate:(NSDate *)date;

//日期对象转化为精确到毫秒的datetime字符串
+ (NSString *)accurateDatetimeStringWithDate:(NSDate *)date;
//日期对象转化为精确到分钟的datetime字符串
+ (NSString *)defaultDateStrWithDate:(NSDate *)date;
//日期对象转化为默认date字符串
+ (NSString *)defaultDateStringWithDate:(NSDate *)date;

//日期对象转化为指定格式字符串
+ (NSString *)stringWithDate:(NSDate *)date withFormat:(NSString *)format;

//指定格式字符串转化为日期对象
+ (NSDate *)dateWithString:(NSString *)str withFormat:(NSString *)format;

//日期对象转化为指定格式字符串
+ (NSDate *)defaultDatetimeWithString:(NSString *)str;

//日期对象转化为指定格式字符串
+ (NSDate *)defaultdateWithString:(NSString *)str;

//将时间与当前时间比较得出传入时间与当前时间间隔 例如 小于一分钟 "刚刚"
+ (NSString *)getFormateDateStringSinceNow:(NSDate *)date;

+ (NSString *)getFormateDateStringSinceNow2:(NSDate *)date yearForShort:(BOOL)yearForShort;

+ (NSString *)getFormateDateStringSinceNow3:(NSDate *)date;

/**
 *  将16进制字符串颜色值转为颜色
 *
 *  @param hexColor 16进制字符串颜
 *
 *  @return UIColor
 */
+ (UIColor *)StringToUIColor:(NSString *)hexColor;
#pragma mark - 文本计算方法
/**
 *  快速计算出文本的真实尺寸
 *
 *  @param font    文字的字体
 *  @param maxSize 文本的最大尺寸
 *
 *  @return 快速计算出文本的真实尺寸
 */
- (CGSize)sizeWithFont:(UIFont *)font andMaxSize:(CGSize)maxSize;
/**
 *  获取ApplicationName
 */
+ (NSString *)getApplicationName;
/**
 *
 *  获取ApplicationScheme
 */
/**
 计算字符串的高度
 
 @param string   字符串
 @param fontSize 字体大小
 @param width    宽度
 
 @return <#return value description#>
 */
+ (CGFloat)heightWithString:(NSString*)string fontSize:(CGFloat)fontSize width:(CGFloat)width;
+ (NSString *)getApplicationScheme;
/**
 *  快速计算出文本的真实尺寸
 *
 *  @param text    需要计算尺寸的文本
 *  @param font    文字的字体
 *  @param maxSize 文本的最大尺寸
 *
 *  @return 快速计算出文本的真实尺寸
 */
+ (CGSize)sizeWithText:(NSString *)text andFont:(UIFont *)font andMaxSize:(CGSize)maxSize;


//对url的参数进行escape转码 (仅仅是参数)
- (NSString *)AFPercentEscapedQueryStringKeyFromStringWithEncoding:(NSStringEncoding) encoding;

//Unicode转UTF-8
+ (NSString *)encodeToPercentEscapeString:(NSString *)input;

//UTF-8转Unicode
+ (NSString *)decodeFromPercentEscapeString:(NSString *)input;


//验证身份证号码
+(BOOL)checkIdentityCardNo:(NSString*)cardNo;

//校验密码
- (BOOL)checkPasswordContain6To18NumAndChar;
//判断是否是颜色值
- (BOOL)checkIsColorValue;
/**
 *  设置富文本字符串
 */
- (NSAttributedString *)attributeStringWithFont:(UIFont *)font color:(UIColor *)color range:(NSRange)range;

@end

