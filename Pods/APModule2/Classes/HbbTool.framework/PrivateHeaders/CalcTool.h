//
//  CalcTool.h
//  HBB_BuyerProject
//
//  Created by chengenluo on 16/10/17.
//  Copyright © 2016年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 计算工具 (可用于任何项目)
 
 @author apem
 */
@interface CalcTool : NSObject

@property (nonatomic, assign) short scale;

//加
- (NSDecimalNumber *)sumWithNum:(NSDecimalNumber *)num num2:(NSDecimalNumber *)num2;
//减
- (NSDecimalNumber *)differenceWithNum:(NSDecimalNumber *)num num2:(NSDecimalNumber *)num2;
//乘
- (NSDecimalNumber *)quadratureWithNum:(NSDecimalNumber *)num num2:(NSDecimalNumber *)num2;
//除
- (NSDecimalNumber *)quotientWithNum:(NSDecimalNumber *)num num2:(NSDecimalNumber *)num2;
//绝对值
- (NSDecimalNumber *)abs:(NSDecimalNumber *)num;
//负数
- (NSDecimalNumber *)nagative:(NSDecimalNumber *)num;
//取整数部分
- (NSDecimalNumber *)intSection:(NSDecimalNumber *)num;
//比较
- (NSComparisonResult)compare:(NSDecimalNumber *)num1 num2:(NSDecimalNumber *)num2;
//约数
- (NSDecimalNumber *)submultiple:(NSDecimalNumber *)num;
//是否NaN
+ (BOOL)isNaN:(NSDecimalNumber *)num;
@end
