//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlagChange, EMMailbox;

@interface MSMoveTriageAction : MSTriageAction
{
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    BOOL _copyMessages;
}

// - (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailbox:(id)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5;

@end
