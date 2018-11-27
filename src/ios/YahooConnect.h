#import <Cordova/CDVPlugin.h>

@interface YahooConnect : CDVPlugin {
}

// The hooks for our plugin commands
- (void)login:(CDVInvokedUrlCommand *)command;
- (void)logout:(CDVInvokedUrlCommand *)command;

@end
