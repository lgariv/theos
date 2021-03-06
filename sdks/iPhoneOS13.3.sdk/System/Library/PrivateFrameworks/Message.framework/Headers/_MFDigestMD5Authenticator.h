//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator
{
    unsigned int _maxbuf:16;
    unsigned int _securityLevel:2;
    NSData *_expectedResponse;
    void _cryptInfo;
}

- (void)setExpectedResponse:(id)arg1;
- (void)setCryptInfo:(void )arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (long long)securityLevel;
- (void)setSecurityLevel:(long long)arg1;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(long long)arg1;
- (void)dealloc;

@end

