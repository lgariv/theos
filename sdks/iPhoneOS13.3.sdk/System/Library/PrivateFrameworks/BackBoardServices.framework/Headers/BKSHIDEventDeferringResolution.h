//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay;

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringEnvironment *_environment;
    int _pid;
    BKSHIDEventDeferringToken *_token;
}

+ (BOOL)supportsSecureCoding;
+ (id)build:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithDisplay:(id)arg1 environment:(id)arg2 pid:(int)arg3 token:(id)arg4;
- (id)init;
- (id)modifiedResolution:(id /* CDUnknownBlockType */)arg1;

@end
