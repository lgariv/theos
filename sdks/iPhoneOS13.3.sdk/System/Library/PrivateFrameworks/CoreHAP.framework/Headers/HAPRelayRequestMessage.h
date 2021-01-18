//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFBlockOperation, NSData, NSMutableSet, NSSet;

@interface HAPRelayRequestMessage : HMFObject
{
    NSMutableSet *_requestIdentifiers;
    unsigned short _transactionIdentifier;
    NSData *_body;
    NSUInteger _type;
    double _timeout;
    HMFBlockOperation *_operation;
}

@property(nonatomic) __weak HMFBlockOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSSet *requestIdentifiers; // @synthesize requestIdentifiers=_requestIdentifiers;
// - (void).cxx_destruct;
- (void)addRequestIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, nonatomic) BOOL sent;
@property(readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequestData:(id)arg1 messageType:(NSUInteger)arg2 timeout:(double)arg3;

@end
