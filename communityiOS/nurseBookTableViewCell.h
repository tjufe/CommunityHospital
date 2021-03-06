//
//  nurseBookTableViewCell.h
//  hospitalAppointment
//
//  Created by 刘芮东 on 16/7/15.
//  Copyright © 2016年 刘芮东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface nurseBookTableViewCell : UITableViewCell
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, copy) void(^cellClickBlock)(UIButton *btn,NSString *str);


- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier andDictionary:(NSDictionary *)dict;
@end
