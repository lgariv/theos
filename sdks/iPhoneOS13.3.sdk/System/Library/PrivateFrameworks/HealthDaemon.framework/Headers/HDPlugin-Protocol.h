//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDProfile, NSString;
@protocol HDHealthDaemon, HDHealthDaemonExtension, HDProfileExtension;

@protocol HDPlugin <NSObject>
@property(readonly, copy, nonatomic) NSString *pluginIdentifier;
- (id <HDProfileExtension>)extensionForProfile:(HDProfile *)arg1;
- (id <HDHealthDaemonExtension>)extensionForHealthDaemon:(id <HDHealthDaemon>)arg1;

@optional
+ (BOOL)shouldLoadPluginForDaemon:(id <HDHealthDaemon>)arg1;
@end
