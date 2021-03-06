//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly) BOOL userNameIsEmail;
@property(readonly) BOOL userNameIsEditable;
- (void)useCredential:(id)arg1;
@property(readonly, retain) NSString *user;
@property(readonly) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, retain) NSString *password;
@property(readonly) BOOL hasPassword;
@property(readonly) long long failureCount;
- (void)cancelAuthentication;
- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)arg1;

@end

