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
#import <APModule3/Module3VC.h>
#import <APSVNModule/SVNVC.h>
#import <APModule2/WorkVC.h>
//#import <MyLib.h>

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
    
//    [[[MyLib alloc] init] go];
    
//    MYVC *myvc = [[MYVC alloc] init];
//    [self.navigationController pushViewController:myvc animated:YES];
    
//    LoginVC *vc = [[LoginVC alloc] init];
//    [self.navigationController pushViewController:vc animated:YES];
    
//    Class cls = [Module3VC class];
//    NSBundle *bdl = [NSBundle bundleForClass:cls];
//    NSString *clsName = NSStringFromClass(cls);
//    UIViewController *module3_vc = [[Module3VC alloc] initWithNibName:clsName bundle:bdl];
//    [self.navigationController presentViewController:module3_vc animated:YES completion:nil];
    
    
//    Class svn_cls = [SVNVC class];
//    NSBundle *svn_bdl = [NSBundle bundleForClass:svn_cls];
//    NSString *svn_classname = NSStringFromClass(svn_cls);
//    UIViewController *svn_vc = [[SVNVC alloc] initWithNibName:svn_classname bundle:svn_bdl];
//    [self.navigationController presentViewController:svn_vc animated:YES completion:nil];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
