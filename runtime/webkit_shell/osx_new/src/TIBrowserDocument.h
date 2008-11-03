//
//  TIBrowserDocument.h
//  Titanium
//
//  Copyright __MyCompanyName__ 2008 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class WebView;
@class TIBrowserWindowController;

@interface TIBrowserDocument : NSDocument {
	TIBrowserWindowController *browserWindowController;
	BOOL isFirst;
}
- (BOOL)isFirst;
- (void)loadRequest:(NSURLRequest *)request;
- (TIBrowserWindowController *)browserWindowController;
- (WebView *)webView;
@end
