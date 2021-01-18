//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/IMAssistantINMessageConverterPersonProvider-Protocol.h>
#import <IMAssistantCore/IMAssistantIdentifiableIntentHandler-Protocol.h>

@class NSArray, NSString;
@protocol IMAssistantMessageHandlerDataSource;

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler>
{
    id <IMAssistantMessageHandlerDataSource> _messageHandlerDataSource;
    NSArray *_keysToFetch;
    NSString *_intentIdentifier;
}

+ (id)connectToIMDaemonController;
@property(copy, nonatomic) NSString *intentIdentifier; // @synthesize intentIdentifier=_intentIdentifier;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) id <IMAssistantMessageHandlerDataSource> messageHandlerDataSource; // @synthesize messageHandlerDataSource=_messageHandlerDataSource;
// - (void).cxx_destruct;
- (void)forceTriggerResumeNotification;
- (id)personFromSPIHandle:(id)arg1 contact:(id)arg2;
- (id)personFromSPIHandle:(id)arg1;
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;
- (id)meContactIdentifier;
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandle:(id)arg1;
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandleID:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (id)contactWithIdentifier:(id)arg1;
- (id)unifiedContactIdentifierForContactIdentifier:(id)arg1;
- (id)contactsMatchingINPerson:(id)arg1;
- (id)_initWithDataSource:(id)arg1 contactKeysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithDataSource:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1;

@end
