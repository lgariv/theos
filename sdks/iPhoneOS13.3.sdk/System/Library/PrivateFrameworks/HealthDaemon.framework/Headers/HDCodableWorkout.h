//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying>
{
    double _duration;
    double _goal;
    long long _goalType;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    double _totalFlightsClimbedInCanonicalUnit;
    double _totalSwimmingStrokeCountInCanonicalUnit;
    long long _type;
    NSMutableArray *_events;
    HDCodableSample *_sample;
    struct {
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalFlightsClimbedInCanonicalUnit:1;
        unsigned int totalSwimmingStrokeCountInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

+ (Class)eventsType;
@property(nonatomic) double totalFlightsClimbedInCanonicalUnit; // @synthesize totalFlightsClimbedInCanonicalUnit=_totalFlightsClimbedInCanonicalUnit;
@property(nonatomic) double totalSwimmingStrokeCountInCanonicalUnit; // @synthesize totalSwimmingStrokeCountInCanonicalUnit=_totalSwimmingStrokeCountInCanonicalUnit;
@property(nonatomic) double totalBasalEnergyBurnedInCanonicalUnit; // @synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double goal; // @synthesize goal=_goal;
@property(nonatomic) long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) double totalDistanceInCanonicalUnit; // @synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit;
@property(nonatomic) double totalEnergyBurnedInCanonicalUnit; // @synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasTotalFlightsClimbedInCanonicalUnit;
@property(nonatomic) BOOL hasTotalSwimmingStrokeCountInCanonicalUnit;
@property(nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property(nonatomic) BOOL hasGoal;
@property(nonatomic) BOOL hasGoalType;
@property(nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property(nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property(nonatomic) BOOL hasDuration;
- (id)eventsAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasSample;
- (BOOL)applyToObject:(id)arg1;
- (id)decodedGoal;
- (NSUInteger)decodedGoalType;
- (id)decodedTotalFlightsClimbed;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedTotalDistance;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalEnergyBurned;
- (id)decodedWorkoutEvents;

@end
