//
//  UserCenterLoggedViewController.h
//  communityiOS
//
//  Created by 何茂馨 on 15/4/1.
//  Copyright (c) 2015年 &#20309;&#33538;&#39336;. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserCenterLoggedViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imgAvatar;
- (IBAction)MyOrderOncilck:(id)sender;

- (IBAction)MyInformationOnclick:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *ReadIcon;


@property (weak, nonatomic) IBOutlet UILabel *labelNickname;
@end
