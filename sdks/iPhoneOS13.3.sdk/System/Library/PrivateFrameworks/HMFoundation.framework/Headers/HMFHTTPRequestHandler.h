//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSPredicate;

@interface HMFHTTPRequestHandler : HMFObject
{
    NSPredicate *_methodPredicate;
    NSPredicate *_URLPredicate;
    id /* CDUnknownBlockType */ _matchBlock;
    id /* CDUnknownBlockType */ _requestBlock;
}

+ (BOOL)_isValidURLPredicate:(id)arg1;
+ (BOOL)_isValidMethodPrediate:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ matchBlock; // @synthesize matchBlock=_matchBlock;
@property(readonly, copy, nonatomic) NSPredicate *URLPredicate; // @synthesize URLPredicate=_URLPredicate;
@property(readonly, copy, nonatomic) NSPredicate *methodPredicate; // @synthesize methodPredicate=_methodPredicate;
// - (void).cxx_destruct;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end
