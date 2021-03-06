//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>


@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    CGPoint _transpositionHistoryCircularBuffer[10];
    NSUInteger _transpositionHistoryLastRecordedIndex;
    BOOL _fillingHistoryBuffer;
    long long _registrationState;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long registrationState;
- (void)_recordTransposition:(CGPoint)arg1;
- (void)_resetImageRegistration;
- (void)_resetTranspositionHistory;
- (void)evaluate:(id)arg1;
- (id)_translationalImageRegistrationRequestForInput:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (BOOL)requiresVisionFramework;
- (void)nodeInitialize;

@end

