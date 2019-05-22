//
//  XP_Button.h
//  ButtonObject
//
//  Created by 林希品 on 2017/3/17.
//  Copyright © 2017年 林希品. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, Button_Derection_Enum) {
    Button_RightTitle=0,//右边文字
    Button_UpTitle,//上面文字
    Button_DownTitle,//下面文字
    Button_LeftTitle//左边文字
};

@interface XP_Button : UIButton

@property (assign, nonatomic) Button_Derection_Enum button_Derection;

/**
 button

 @param frame frame
 @param title title
 @param color 颜色
 @param imageViewName 图片
 @param button_Derection 图片——文字 位置
 @return button
 */
- (instancetype)initWithFrame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)color imageViewName:(NSString *)imageViewName button_Title_Derection:(Button_Derection_Enum)button_Derection;
@end
