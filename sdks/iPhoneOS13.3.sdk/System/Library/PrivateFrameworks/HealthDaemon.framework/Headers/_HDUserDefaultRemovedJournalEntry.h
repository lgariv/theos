//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry
{
    NSString *_key;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
