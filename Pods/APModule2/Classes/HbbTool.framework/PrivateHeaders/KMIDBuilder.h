//
//  KMIDBuilder.h
//  HBB_BuyerProject
//
//  Created by LUOCHENG DE on 16/12/9.
//  Copyright © 2016年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMIDBuilder : NSObject

/**
 创建id
 
 @param prefix id前缀
 @return id
 */
+(NSString *)createID;

/**
 创建id

 @param prefix id前缀
 @return id
 */
+(NSString *)createIDWithPrefix:(NSString *)prefix;


@end
