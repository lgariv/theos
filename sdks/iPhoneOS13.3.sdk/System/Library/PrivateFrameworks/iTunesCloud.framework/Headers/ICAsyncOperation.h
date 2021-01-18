//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface ICAsyncOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (void)_execute;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (void)execute;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (id)init;

@end
