//
//  VZFNodeViewManager.h
//  VZFlexLayout
//
//  Created by moxin on 16/1/30.
//  Copyright © 2016年 Vizlab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VZFNodeLayout.h"


@class VZFNode;
@class VZFImageNode;

static char const kViewReuseInfoKey = ' ';

@interface VZFNodeViewManager : NSObject

+ (UIView* )viewForNode:(VZFNode* )node withLayoutSpec:(const VZFNodeLayout&)layout;


+ (UIView* )viewForNode:(VZFNode* )node withLayoutSpec:(const VZFNodeLayout&)layout reuseView:(UIView *)cell;

@end