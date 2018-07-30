//
//  BaseConstants.h
//  HBB_BuyerProject
//
//  Created by CHENG DE LUO on 15/9/16.
//  Copyright (c) 2015年 CHENG DE LUO. All rights reserved.
//

/**
 *  基础常量宏定义
 *
 *  @author apem
 */

#ifndef HBB_BuyerProject_BaseConstants_h
#define HBB_BuyerProject_BaseConstants_h

//屏幕尺寸
#define M_IS_PORTRAIT (UIInterfaceOrientationIsPortrait([[UIApplication sharedApplication] statusBarOrientation]))                      //是否竖屏
#define DeviceWidth   [[UIScreen mainScreen] bounds].size.width    //设备屏幕宽
#define DeviceHeight [[UIScreen mainScreen] bounds].size.height   //设备屏幕高

#define M_Scale ([UIScreen mainScreen].scale) //倍数

//系统版本
#define SYSTEM_VERSION_LESS_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending) //用来获取手机的系统，判断系统版本
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

//弱引用当前类
#define WS(weakSelf)  __weak __typeof(&*self) weakSelf = self;

//颜色
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define UIColorFrom255RGBA(r, g, b, a) \
([UIColor colorWithRed: r/255.0 green: g/255.0 blue: b/255.0 alpha:a])

#define UIColorFrom255RGB(r, g, b) \
(UIColorFrom255RGBA(r, g, b, 1.0))

#define UIColorFromRGBA(rgbValue, a) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define M_lineHeight 0.5                                            //线高度
#define M_NavigationHeight (DeviceHeight == 812.0 ? 88 : 64)        //导航栏高度
#define M_TabBarHeight 49                                           //标签栏高度
#define M_KeyboardHeight 258                                        //键盘高度

#define M_IS_USER_INTERFACE_IDIOM_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone ? YES : NO)   //IS IPHONE
#define M_IS_USER_INTERFACE_IDIOM_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad ? YES : NO)   //IS IPAD

#define M_IS_IPOD_TOUCH [[[UIDevice currentDevice] model] isEqualToString:@"iPodTouch"]; //IS IPOD TOUCH（Test env）

#define M_cellOrignalHeight 44                                      //DEFAULT CELL HEIGHT

//动画
#define M_animateShowInTime 0.35  //动画滑入时间
#define m_animateShowOutTime 0.25 //动画滑出时间

//debug
#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#define debugMethod() NSLog(@"%s", __func__)
#define debugMethodWithLog(log) NSLog(@"%s,%@", __func__, log)
#else
#define NSLog(...)
#define debugMethod() NSLog(@"%s", __func__)
#define debugMethodWithLog(log) NSLog(@"%s,%@", __func__, log)
#endif

//cell
#define M_reusableCell @"reusableCell"  //可重用cell的标识

//string
#define NSLS(str) (NSLocalizedString(str, nil)) //国际化字符串
#define L(string) (NSLocalizedString(string, nil)) //国际化字符串2

///**
// APPDelgate是临时放在这里的,以后即将被移出
// 这里不能引入其他头文件
// @author apem
// */
//#import "AppDelegate.h"
////APP Delegate
//#define APP_DELEGATE ((AppDelegate *)[[UIApplication sharedApplication] delegate])

////平安银行accesskey
//#define pinanAccessKey @"c4ca4238a0b923820dcc509a6f75849b"

#define oneM 1024

#ifndef weakify
#if DEBUG
#if __has_feature(objc_arc)
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef strongify
#if DEBUG
#if __has_feature(objc_arc)
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif

#endif
