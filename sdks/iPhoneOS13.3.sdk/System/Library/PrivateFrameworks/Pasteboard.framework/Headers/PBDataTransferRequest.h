//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSProgress, NSString, PBItem, PBItemCollection, PBItemRepresentation;

@interface PBDataTransferRequest : NSObject <NSProgressReporting>
{
    PBItemCollection *_itemCollection;
    PBItem *_item;
    PBItemRepresentation *_repr;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PBItemRepresentation *repr; // @synthesize repr=_repr;
@property(retain, nonatomic) PBItem *item; // @synthesize item=_item;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;

@end
