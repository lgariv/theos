//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <RunningBoardServices/RBSProcessIdentifier-Protocol.h>

@interface NSNumber (RBSProcessIdentifier) <RBSProcessIdentifier>
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (int)rbs_pid;
@end

