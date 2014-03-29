//
//  CustomTableCell.h
//  TestProj
//
//  Created by Anton Marinov on 1/29/14.
//  Copyright (c) 2014 Anton Marinov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncImageView.h"

@interface CustomTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet AsyncImageView *imageIcon;
@property (nonatomic, weak) IBOutlet UILabel        *lblTitle;
@property (nonatomic, weak) IBOutlet UILabel        *lblSubTitle;

@end
