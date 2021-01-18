//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject
{
    NSString *_headline;
    NSString *_summary;
    NSString *_source;
    NSDate *_date;
    NSURL *_link;
    NSString *_localizedDateString;
}

+ (id)localizedStringForDate:(id)arg1;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, retain, nonatomic) NSString *localizedDateString;
- (long long)chronologicalComparisonWithNewsItem:(id)arg1;
- (id)archiveDictionary;
- (id)initWithArchiveDictionary:(id)arg1;
- (void)resetLocale;

@end
