//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMReminder;

@interface REMReminderFlaggedContext : NSObject
{
    REMReminder *_reminder;
}

@property(retain, nonatomic) REMReminder *reminder; // @synthesize reminder=_reminder;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long flagged;
- (id)initWithReminder:(id)arg1;

@end
