//
//  GitHubTestAppDelegate.h
//  GitHubTest
//
//  Created by app1e on 11/06/16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitHubTestViewController;

@interface GitHubTestAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    GitHubTestViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet GitHubTestViewController *viewController;

@end

