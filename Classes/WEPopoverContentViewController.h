//
//  WEPopoverContentViewController.h
//  WEPopover
//
//  Created by Werner Altewischer on 06/11/10.
//  Copyright 2010 Werner IT Consultancy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ACPopoverContentDelegate.h"

@interface WEPopoverContentViewController : UITableViewController {

}

@property (nonatomic, retain) NSObject<ACPopoverContentDelegate> *contentDelegate;

@end
