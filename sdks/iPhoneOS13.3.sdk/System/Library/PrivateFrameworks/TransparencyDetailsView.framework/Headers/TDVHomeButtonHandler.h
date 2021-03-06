//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TransparencyDetailsView/SBSHardwareButtonEventConsuming-Protocol.h>

@protocol BSInvalidatable;

@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming>
{
    id /* CDUnknownBlockType */ _homeButtonHandlerCallback;
    id <BSInvalidatable> _homeButtonAssertion;
}

+ (id)handlerWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) id <BSInvalidatable> homeButtonAssertion; // @synthesize homeButtonAssertion=_homeButtonAssertion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ homeButtonHandlerCallback; // @synthesize homeButtonHandlerCallback=_homeButtonHandlerCallback;
// - (void).cxx_destruct;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)stopConsumingHardwarePresses;
- (void)startConsumingHardwarePresses:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end

