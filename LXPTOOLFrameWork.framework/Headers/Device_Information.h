//
//  Device_Information.h
//  iOS_Device_Information
//
//  Created by 林希品 on 2017/3/16.
//  Copyright © 2017年 林希品. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Device_Information : NSObject

//1.获取电池电量(一般用百分数表示,大家自行处理就好)
+(CGFloat)getBatteryQuantity;

//2.获取电池状态(UIDeviceBatteryState为枚举类型)
+(UIDeviceBatteryState)getBatteryStauts;

//3.获取总内存大小
+(long long)getTotalMemorySize;

//型号
+ (NSString *)getCurrentDeviceModel:(UIViewController *)controller;

//IP地址
+ (NSString *)deviceIPAdress;

//当前手机连接的WIFI名称(SSID)
+ (NSString *)getWifiName;




@end
