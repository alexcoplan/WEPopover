//
//  WEPopoverTableViewController.h
//  WEPopover
//
//  Created by Werner Altewischer on 1/4/11.
//  Copyright 2011 Werner IT Consultancy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WEPopoverController.h"
#import "ACPopoverContentDelegate.h"

@interface WEPopoverTableViewController : UITableViewController<WEPopoverControllerDelegate, UIPopoverControllerDelegate, ACPopoverContentDelegate> {
	WEPopoverController *popoverController;
	NSInteger currentPopoverCellIndex;
	Class popoverClass;
}

@property (nonatomic, retain) WEPopoverController *popoverController;

- (IBAction)showPopover:(id)sender;

@end
