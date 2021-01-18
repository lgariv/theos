//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLTelemetryController-Protocol.h>

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>
{
}

- (void)captureItemRemoval:(id)arg1;
- (void)captureItemView:(id)arg1;
- (void)captureItemAddition:(id)arg1;
- (void)captureCurrentState:(id)arg1;
- (void)captureClientRemoval:(id)arg1;
- (void)captureClientAddition:(id)arg1;
- (void)captureGroupRemoval:(id)arg1;
- (void)captureGroupAddition:(id)arg1;
- (void)captureActionForItemIdentifier:(id)arg1 withEvent:(NSUInteger)arg2 source:(NSUInteger)arg3;
- (void)captureActionForItem:(id)arg1 withEvent:(NSUInteger)arg2 source:(NSUInteger)arg3;

@end
