//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFSportsTeam-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage;

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying>
{
    SFImage *_logo;
    NSString *_record;
    NSString *_score;
    NSString *_accessibilityDescription;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *record; // @synthesize record=_record;
@property(retain, nonatomic) SFImage *logo; // @synthesize logo=_logo;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
