//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSNumber, NSString;

@interface HFNumberRange : NSObject <NAIdentifiable>
{
    NSUInteger _type;
    NSNumber *_maxValue;
    NSNumber *_midValue;
    NSNumber *_minValue;
}

+ (id)na_identity;
+ (id)rangeWithFloatRange:(CDStruct_c3b9c2ee)arg1;
+ (id)valueWithValue:(id)arg1;
+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
@property(copy, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(copy, nonatomic) NSNumber *midValue; // @synthesize midValue=_midValue;
@property(copy, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)intersectRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)mapValue:(id)arg1 fromRange:(id)arg2;
- (id)percentageValueForValue:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee floatRangeValue;
@property(readonly, copy, nonatomic) NSNumber *spanValue;
- (id)initWithType:(NSUInteger)arg1;
- (id)init;

@end
