//
//  EncodingUtf-8.h
//  SQT
//
//  Created by ios on 12-3-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EncodingUtf_8 : NSObject
//解码
+(NSString *)encode:(NSString *)s;

//编码
+ (NSString *)escape:(NSString *)input;
@end
