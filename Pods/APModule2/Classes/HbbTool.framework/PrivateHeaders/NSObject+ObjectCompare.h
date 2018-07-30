//
//  NSObject+ObjectCompare.h
//  ObjectCompareDemo
//
//  Created by mige on 16/6/8.
//  Copyright © 2016年 mige. All rights reserved.
//

/**
 *  比较两个对象是否相等 （属性是对象、数组等特殊类型不能比较）
 *
 *  @author mige
 */
#import <Foundation/Foundation.h>

@interface NSObject (ObjectCompare)

- (BOOL)isEqualToObject:(id)object;

@end
