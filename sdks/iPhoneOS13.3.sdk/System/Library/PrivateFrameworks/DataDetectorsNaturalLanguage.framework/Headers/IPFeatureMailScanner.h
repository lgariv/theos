//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class IPFeatureData, NSArray, NSMutableArray;

@interface IPFeatureMailScanner : IPFeatureScanner
{
    BOOL _subjectContainsDate;
    NSArray *_subjectDataDetectorsFeatures;
    NSArray *_subjectSentenceFeatures;
    NSMutableArray *_subjectKeywordFeatures;
    NSMutableArray *_subjectAndBodyDataDetectorsFeatures;
    IPFeatureData *_dateInSubjectFeatureData;
}

@property(retain) IPFeatureData *dateInSubjectFeatureData; // @synthesize dateInSubjectFeatureData=_dateInSubjectFeatureData;
@property BOOL subjectContainsDate; // @synthesize subjectContainsDate=_subjectContainsDate;
@property(retain) NSMutableArray *subjectAndBodyDataDetectorsFeatures; // @synthesize subjectAndBodyDataDetectorsFeatures=_subjectAndBodyDataDetectorsFeatures;
@property(retain) NSMutableArray *subjectKeywordFeatures; // @synthesize subjectKeywordFeatures=_subjectKeywordFeatures;
@property(retain) NSArray *subjectSentenceFeatures; // @synthesize subjectSentenceFeatures=_subjectSentenceFeatures;
@property(retain) NSArray *subjectDataDetectorsFeatures; // @synthesize subjectDataDetectorsFeatures=_subjectDataDetectorsFeatures;
// - (void).cxx_destruct;
- (id)emailParticipantNames;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)resetScanState;
- (BOOL)isBlacklistedSender:(id)arg1;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(id)arg3 dataFeatures:(id)arg4;
- (void)processScanOfMessageUnit:(id)arg1;
- (void)doSynchronousScanWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;

@end

