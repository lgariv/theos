//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch
{
    NSString *_searchedString;
    TSWPFilteredString *_filteredString;
    TSWPStorage *_storage;
    NSRange _range;
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, retain, nonatomic) TSWPFilteredString *filteredString; // @synthesize filteredString=_filteredString;
@property(readonly, nonatomic) NSString *searchedString; // @synthesize searchedString=_searchedString;
@property(nonatomic) NSRange range; // @synthesize range=_range;
- (void)foundHitWithRange:(NSRange)arg1;
- (BOOL)isComplete;
- (void)dealloc;
- (id)initWithString:(id)arg1 options:(NSUInteger)arg2 hitBlock:(id /* CDUnknownBlockType */)arg3 storage:(id)arg4 range:(NSRange)arg5;

@end

