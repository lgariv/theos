//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKDiagnosticTestResult.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@interface HKDiagnosticTestResult (HKDistinctableObject) <HDCoding>
+ (BOOL)supportsDistinctByKeyPath:(id)arg1;
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id )arg2;
- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
@end
