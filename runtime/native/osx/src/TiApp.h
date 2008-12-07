/**
 * This file is part of Appcelerator's Titanium project.
 *
 * Copyright 2008 Appcelerator, Inc.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. 
 */
#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
#import "Ti.h"
#import "TiWindow.h"

@class WebView;

@interface TiApp : NSObject 
{
	WebView *webView;
	TiWindow *window;
}

- (id)initWithWindow:(TiWindow*)window;

- (void)include:(NSString *)s;
- (void)includeFromObject:(NSString *)s webScriptObject:(WebScriptObject*)object;
- (void)debug:(NSString *)s;
- (void)quit;

// used by the update service
- (NSString*)getGUID;
- (NSString*)getID;
- (NSString*)getVersion;
- (NSString*)getUpdateURL;
- (NSString*)getName;


//TODO: these need to go away
- (void)hide;
- (void)show;
- (void)activate;
- (void)minimize;
- (void)setSize:(int)width height:(int)height animate:(int)animate;
- (void)setBackgroundColor:(NSString*)color;
- (NSString*)resourcePath;

@end