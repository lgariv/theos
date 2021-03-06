//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUIAppPunchOut, SAUIImageResource;

@interface SAUSGenericResult : SADomainObject
{
}

+ (id)genericResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)genericResult;
@property(copy, nonatomic) NSNumber *titleMaxLines;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIImageResource *thumbnail;
@property(copy, nonatomic) NSString *secondaryTitle;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *descriptions;
@property(nonatomic) BOOL centered;
@property(retain, nonatomic) SAUIAppPunchOut *actionButton;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

