//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@interface TRHandshakeOperationHandler : NSObject <TROperationHandler>
{
    id /* CDUnknownBlockType */ _handshakeHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handshakeHandler; // @synthesize handshakeHandler=_handshakeHandler;
// - (void).cxx_destruct;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithHandshakeHandler:(id /* CDUnknownBlockType */)arg1;

@end
