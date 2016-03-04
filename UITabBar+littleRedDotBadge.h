//
//  UITabBar+littleRedDotBadge.h
//  标签视图控制器
//
//  Created by 大欢 on 16/2/20.
//  Copyright © 2016年 大欢. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (littleRedDotBadge)

//显示小红点
- (void)showBadgeOnItemIndex:(int)index;
//隐藏小红点
- (void)hideBadgeOnItemIndex:(int)index;

@end
