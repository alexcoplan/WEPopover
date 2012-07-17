//
//  WEPopoverAppDelegate.m
//  WEPopover
//
//  Created by Werner Altewischer on 06/11/10.
//  Copyright 2010 Werner IT Consultancy. All rights reserved.
//

#import "WEPopoverAppDelegate.h"
#import "WEPopoverViewController.h"

@implementation WEPopoverAppDelegate

@synthesize window;
@synthesize navController;


#pragma mark -
#pragma mark Application lifecycle

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after application launch.

    // Add the view controller's view to the window and display.
    [window addSubview:navController.view];
    [window makeKeyAndVisible];

    return YES;
}

- (void)dealloc {
    [navController release];
    [window release];
    [super dealloc];
}


@end
