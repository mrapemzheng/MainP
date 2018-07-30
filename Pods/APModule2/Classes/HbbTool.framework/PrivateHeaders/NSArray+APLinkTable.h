//
//  NSArray+APLinkTable.h
//  HBB_BuyerProject
//
//  Created by chengenluo on 16/7/28.
//  Copyright © 2016年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  字典key生成规则
 *
 *  @param value 字典的值
 *
 *  @return 字典的key
 */
typedef id<NSCopying>(^APLinkTableKeyRule)(id value);


/**
 是否一致规则

 @param value 数组中的元素
 @return 是否一致
 */
typedef BOOL(^APLinkTableIsEqualRule)(id value);

/**
 *  AP字典key生成协议
 */
@protocol APLinkTableKeyProtocol

/**
 *  返回字典key
 *
 *  @return 字典的key
 */
@required
- (id<NSCopying>)linkTableKey;

@end

/**
 *  数组分类+链表
 *
 *  @author apem
 */
@interface NSArray (APLinkTable)

/**
 *  数组生成字典链表
 *
    @caution 数组里的对象必须实现APLinkTableKeyProtocol, 否则会引起报错
 
 *  @return 字典链表
 */
- (NSMutableDictionary *)linkDictionary;

/**
 *  删除对应的数组
 *
 *  @param exceptArray 重复数组
 *
 *  @return 排除后的数组
 */
- (NSArray *)arrayWithExceptArray:(NSArray *)exceptArray;

/**
 *  合并两个数组(重复部分不合并)
 *
 *  @param array 另外一个数组
 *
 *  @return 合并排除重复后的数组
 */
- (NSArray *)combineUniqueArrayWithArray:(NSArray *)array;


/**
 替换数组生成一个新数组 (替换重复部分)

 @param replaceArray 用于替换的数组
 @return 替换后的数组
 */
- (NSArray *)arrayByReplaceArray:(NSArray<id<APLinkTableKeyProtocol>> *)replaceArray;

//通过指定key规则和新value生成规则生成新数组
- (NSArray *)arrayWithRule:(APLinkTableKeyRule)rule consistRule:(id(^)(NSArray *values))consistRule;


/**
 *  数组生成字典链表
 *  @param rule 字典key生成规则
 *
 *  @return 链表
 */
- (NSMutableDictionary *)linkDictionaryWithRule:(APLinkTableKeyRule)rule;


/**
 *  数组生成数字字典链表
 *  @param rule 字典key生成规则
 *  @return 链表
 */
- (NSMutableDictionary *)linkArrayDictionaryWithRule:(APLinkTableKeyRule)rule;

/**
 根据ID是否一致,判断是否包含对象

 @param object 对象

 @return 是否
 */
- (BOOL)hp_containObject:(NSObject<APLinkTableKeyProtocol>*)object;


/**
 对象在数组中的下标

 @param object 对象
 @return 下标
 */
- (NSInteger)hp_indexOfObject:(NSObject<APLinkTableKeyProtocol>*)object;



/**
 对象在数组中的下标

 @param verify 验证规则
 @return 对象在数组中的下标
 */
- (NSInteger)hp_indexWithVerifyRule:(APLinkTableIsEqualRule)verifyRule;

@end
