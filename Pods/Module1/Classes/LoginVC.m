//
//  LoginVC.m
//  Module1
//
//  Created by chengenluo on 2018/7/26.
//  Copyright © 2018年 chengenluo. All rights reserved.
//

#import "LoginVC.h"
#import <APModule2/WorkVC.h>
#import <AFNetworking/AFNetworking.h>

@interface LoginVC ()

@end
 
@implementation LoginVC

- (instancetype)init
{
    Class cls = [self class];
    NSString *clsName = NSStringFromClass(cls);
    NSBundle *bundle = [NSBundle bundleForClass:cls];
    LoginVC *vc = [self initWithNibName:clsName bundle:bundle];
    
    return vc;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    Class cls = [WorkVC class];
    NSString *clsName = NSStringFromClass(cls);
    NSBundle *bdl = [NSBundle bundleForClass:cls];
    WorkVC *vc = [[WorkVC alloc] initWithNibName:clsName bundle:bdl];
    [self.navigationController pushViewController:vc animated:YES];
    
    
    [[AFHTTPSessionManager alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
