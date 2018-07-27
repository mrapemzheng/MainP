//
//  ViewController.m
//  MainP
//
//  Created by chengenluo on 2018/7/3.
//  Copyright © 2018年 chengenluo. All rights reserved.
//

#import "ViewController.h"
#import <Module1/ModuleFunc.h>
#import <Module1/LoginVC.h>
#import <AFNetworking/AFNetworking.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    ModuleFunc *mf = [[ModuleFunc alloc] init];
    [mf go];
    [mf go_V2];
}


- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    LoginVC *vc = [[LoginVC alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
    
    
    [[AFHTTPSessionManager alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
