//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>
{
}

+ (id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acePronunciationItem;
@property(copy, nonatomic) NSString *tts;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
