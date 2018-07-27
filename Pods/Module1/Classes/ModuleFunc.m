//
//  ModuleFunc.m
//  Module1
//
//  Created by chengenluo on 2018/7/3.
//  Copyright © 2018年 chengenluo. All rights reserved.
//

#import "ModuleFunc.h"

@implementation ModuleFunc

- (void)go
{
    NSLog(@"%s: gogogo", __func__);
}

- (void)go_V2
{
    NSLog(@"just go V2");
}

- (void)go_V3
{
    NSLog(@"go v3");
}

@end
