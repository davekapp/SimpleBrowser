//
//  CPSimpleBrowserAppDelegate.h
//  CPSimpleBrowser
//
//  Created by David Kapp on 4/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CPSimpleBrowserAppDelegate : NSObject <NSApplicationDelegate> {
@private
  NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
