//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate
{
    NSString *_homeCountryCode;
    NSString *_phoneNumber;
    NSString *_country;
}

@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context )arg1 predicateContext:(id)arg2 values:(struct sqlite3_value )arg3 count:(int)arg4;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement )arg1 withBindingOffset:(int )arg2 predicateIdentifier:(int)arg3;
- (BOOL)hasCallback;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2;
- (id)predicateFormat;
- (BOOL)isValid;
- (id)homeCountryCode;
- (void)dealloc;

@end
