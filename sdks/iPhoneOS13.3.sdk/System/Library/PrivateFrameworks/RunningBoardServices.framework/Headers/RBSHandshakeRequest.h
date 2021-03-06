//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSSet;

@interface RBSHandshakeRequest : NSObject <BSXPCSecureCoding>
{
    unsigned int _euid;
    NSSet *_assertionDescriptors;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(retain, nonatomic) NSSet *assertionDescriptors; // @synthesize assertionDescriptors=_assertionDescriptors;
@property(nonatomic) unsigned int euid; // @synthesize euid=_euid;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;

@end

