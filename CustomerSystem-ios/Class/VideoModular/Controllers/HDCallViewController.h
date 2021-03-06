//
//  HDCallViewController.h
//  HRTCDemo
//
//  Created by afanda on 7/26/17.
//  Copyright © 2017 easemob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HDMemberObject.h"

@interface HDCallViewController : UIViewController

@property(nonatomic,strong) NSString *nickname;

- (void)addStreamWithHDMemberObj:(HDMemberObject *)obj;

- (void)layoutVideosWithMembers:(NSArray *)members;

- (void)showOneVideoBackView:(HDCallBackView *)backView;

- (void)passiveCloseSessionTip:(NSString *)tip;
@end
