//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVControlInteractionFactory-Protocol.h>

@protocol SVInteractionContextFactory;

@interface SVControlInteractionFactory : NSObject <SVControlInteractionFactory>
{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property(readonly, nonatomic) id <SVInteractionContextFactory> interactionContextFactory; // @synthesize interactionContextFactory=_interactionContextFactory;
// - (void).cxx_destruct;
- (id)createInteractionWithControl:(id)arg1 events:(NSUInteger)arg2;
- (id)initWithInteractionContextFactory:(id)arg1;

@end
