//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@interface FCCancelHandler : NSObject <FCOperationCanceling>
{
    id /* CDUnknownBlockType */ _cancelBlock;
    id _weakTarget;
    id _strongTarget;
    SEL _selector;
}

+ (id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id strongTarget; // @synthesize strongTarget=_strongTarget;
@property(nonatomic) __weak id weakTarget; // @synthesize weakTarget=_weakTarget;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelBlock; // @synthesize cancelBlock=_cancelBlock;
// - (void).cxx_destruct;
- (void)cancel;
- (id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end
