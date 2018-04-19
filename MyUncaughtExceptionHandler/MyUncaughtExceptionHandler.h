//
//  MyUncaughtExceptionHandler.h
//  Test
//
//  Created by ken on 2018/4/19.
//  Copyright © 2018年 ken. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyUncaughtExceptionHandler : NSObject
+ (void)setDefaultHandler;
+ (NSUncaughtExceptionHandler *)getHandler;
+ (void)TakeException:(NSException *) exception;
@end
