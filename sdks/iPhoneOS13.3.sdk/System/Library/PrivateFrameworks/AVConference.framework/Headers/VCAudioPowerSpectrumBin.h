//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumBin : NSObject
{
    struct _VCRange _frequencyRange;
    float _powerLevel;
}

@property(nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(nonatomic) struct _VCRange frequencyRange; // @synthesize frequencyRange=_frequencyRange;
- (id)initWithFrequencyRange:(struct _VCRange)arg1;
- (id)description;

@end

