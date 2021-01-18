//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSwitchManager : NSObject
{
    unsigned int _localSwitches;
    unsigned int _remoteSwitches;
    unsigned int _negotiatedSwitches;
}

@property unsigned int negotiatedSwitches; // @synthesize negotiatedSwitches=_negotiatedSwitches;
@property unsigned int remoteSwitches; // @synthesize remoteSwitches=_remoteSwitches;
@property unsigned int localSwitches; // @synthesize localSwitches=_localSwitches;
- (id)description;
- (BOOL)isLocalSwitchEnabled:(unsigned int)arg1;
- (BOOL)isSwitchEnabled:(unsigned int)arg1;
- (void)negotiateSwitches;
- (void)updateDuplicationEnhancementSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalABTestSwitches;
- (void)setupLocalOnOffSwitches;
- (void)initializeLocalSwitches;

@end
