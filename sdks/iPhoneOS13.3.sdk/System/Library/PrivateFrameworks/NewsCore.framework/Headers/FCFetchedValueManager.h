//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBoostableOperationThrottlerDelegate-Protocol.h>
#import <NewsCore/FCFetchedValueManagerObserving-Protocol.h>

@class FCBoostableOperationThrottler, FCFetchedValueDescriptor, NFUnfairLock, NSError, NSHashTable;
@protocol NFCopying;

@interface FCFetchedValueManager : NSObject <FCFetchedValueManagerObserving, FCBoostableOperationThrottlerDelegate>
{
    id <NFCopying> _value;
    FCFetchedValueDescriptor *_descriptor;
    FCBoostableOperationThrottler *_operationThrottler;
    NSHashTable *_observers;
    NFUnfairLock *_lock;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FCBoostableOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property(readonly, copy, nonatomic) FCFetchedValueDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) id <NFCopying> value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (NSUInteger)_cachePolicyForOptions:(NSUInteger)arg1;
- (NSUInteger)_optionsForCachePolicy:(NSUInteger)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleValue:(id)arg1;
- (id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchValueWithCachePolicy:(NSUInteger)arg1 qualityOfService:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchValueWithQualityOfService:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithDescriptor:(id)arg1;
- (id)init;
- (id)valuePromiseWithQualityOfService:(long long)arg1;

@end
