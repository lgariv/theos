//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;
@protocol PKCloudStoreCoding;

@interface PKCloudRecordObject : NSObject <NSSecureCoding>
{
    NSArray *_records;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
// - (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(BOOL)arg1;
- (id)description;
- (id)descriptionWithItem:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<PKCloudStoreCoding> *item;
- (id)initWithRecords:(id)arg1;

@end
