//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebServiceContext.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, PKPaymentWebServiceConfiguration, PKPaymentWebServiceRegion;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceContext : PKWebServiceContext
{
//     struct os_unfair_lock_s _lock_context;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    NSDictionary *_regions;
    NSObject<OS_dispatch_queue> *_queue;
//     struct os_unfair_lock_s _cacheLock;
    NSMutableDictionary *_featureSupportedLangaugeCache;
    BOOL _devSigned;
    BOOL _transactionServiceDisabled;
    BOOL _messageServiceDisabled;
    BOOL _ignoreProvisioningEnablementPercentage;
    long long _version;
    NSString *_deviceID;
    NSString *_secureElementID;
    NSString *_pushToken;
    NSString *_nextPushToken;
    NSString *_companionSerialNumber;
    NSDate *_registrationDate;
    NSDate *_configurationDate;
    PKPaymentWebServiceConfiguration *_configuration;
    NSString *_primaryRegionIdentifier;
    long long _consistencyCheckBackoffLevel;
    NSArray *_certificates;
    NSString *_lastUpdatedTag;
}

+ (void)_migrateFrom0To1:(id)arg1;
+ (void)_migrateContext:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy) NSArray *certificates; // @synthesize certificates=_certificates;
@property long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(copy) NSString *primaryRegionIdentifier; // @synthesize primaryRegionIdentifier=_primaryRegionIdentifier;
@property BOOL ignoreProvisioningEnablementPercentage; // @synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage;
@property BOOL messageServiceDisabled; // @synthesize messageServiceDisabled=_messageServiceDisabled;
@property BOOL transactionServiceDisabled; // @synthesize transactionServiceDisabled=_transactionServiceDisabled;
@property(retain) PKPaymentWebServiceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy) NSDate *configurationDate; // @synthesize configurationDate=_configurationDate;
@property(copy) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy) NSString *nextPushToken; // @synthesize nextPushToken=_nextPushToken;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property long long version; // @synthesize version=_version;
// - (void).cxx_destruct;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(NSUInteger)arg1;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(NSUInteger)arg1;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1;
- (double)_contextProvisioningEnablementValue;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2;
- (BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;
- (id)_regionWithPeerPaymentServiceURL;
@property(readonly, nonatomic) BOOL hasPeerPaymentAccount;
@property(readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property(readonly) __weak NSDictionary *TSMURLStringByPushTopic;
- (id)TSMPushTopics;
@property(readonly) __weak PKPaymentWebServiceRegion *primaryRegion;
- (id)regionForIdentifier:(id)arg1;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)_localizationUpdated;
- (id)debugDescription;
@property(retain) NSDictionary *regions;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
