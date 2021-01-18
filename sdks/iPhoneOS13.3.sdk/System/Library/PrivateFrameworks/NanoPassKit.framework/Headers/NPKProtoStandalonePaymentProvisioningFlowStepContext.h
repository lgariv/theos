//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext, NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext, NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext, NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext, NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext, NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext, NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext, NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext, NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext, NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext, NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowStepContext : PBCodable <NSCopying>
{
    NSString *_backStepIdentifier;
    NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *_chooseCredentialsStepContext;
    NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *_chooseFlowStepContext;
    NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *_chooseProductStepContext;
    NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *_digitalIssuanceAmountStepContext;
    NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *_digitalIssuancePaymentStepContext;
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *_issuerVerificationChannelsStepContext;
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *_issuerVerificationCodeStepContext;
    NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *_issuerVerificationFieldsStepContext;
    NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *_localDeviceManualEntryProgressStepContext;
    NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *_localDeviceManualEntryStepContext;
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;
    NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *_moreInformationStepContext;
    NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *_productDisambiguationStepContext;
    NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *_provisioningProgressStepContext;
    NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *_provisioningResultStepContext;
    NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *_readerModeEntryStepContext;
    NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *_readerModeIngestionStepContext;
    NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *_secondaryManualEntryStepContext;
    NSString *_stepIdentifier;
    NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *_termsAndConditionsStepContext;
    NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *_welcomeStepContext;
    BOOL _allowsAddLater;
    struct {
        unsigned int allowsAddLater:1;
    } _has;
}

@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationCodeStepContext *issuerVerificationCodeStepContext; // @synthesize issuerVerificationCodeStepContext=_issuerVerificationCodeStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationFieldsStepContext *issuerVerificationFieldsStepContext; // @synthesize issuerVerificationFieldsStepContext=_issuerVerificationFieldsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext *issuerVerificationChannelsStepContext; // @synthesize issuerVerificationChannelsStepContext=_issuerVerificationChannelsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext *provisioningResultStepContext; // @synthesize provisioningResultStepContext=_provisioningResultStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext *provisioningProgressStepContext; // @synthesize provisioningProgressStepContext=_provisioningProgressStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext *termsAndConditionsStepContext; // @synthesize termsAndConditionsStepContext=_termsAndConditionsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowProductDisambiguationStepContext *productDisambiguationStepContext; // @synthesize productDisambiguationStepContext=_productDisambiguationStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryProgressStepContext *localDeviceManualEntryProgressStepContext; // @synthesize localDeviceManualEntryProgressStepContext=_localDeviceManualEntryProgressStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowLocalDeviceManualEntryStepContext *localDeviceManualEntryStepContext; // @synthesize localDeviceManualEntryStepContext=_localDeviceManualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext *secondaryManualEntryStepContext; // @synthesize secondaryManualEntryStepContext=_secondaryManualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // @synthesize manualEntryStepContext=_manualEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext *readerModeIngestionStepContext; // @synthesize readerModeIngestionStepContext=_readerModeIngestionStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext *readerModeEntryStepContext; // @synthesize readerModeEntryStepContext=_readerModeEntryStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext *moreInformationStepContext; // @synthesize moreInformationStepContext=_moreInformationStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext *digitalIssuancePaymentStepContext; // @synthesize digitalIssuancePaymentStepContext=_digitalIssuancePaymentStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext *digitalIssuanceAmountStepContext; // @synthesize digitalIssuanceAmountStepContext=_digitalIssuanceAmountStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext *chooseCredentialsStepContext; // @synthesize chooseCredentialsStepContext=_chooseCredentialsStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext *chooseProductStepContext; // @synthesize chooseProductStepContext=_chooseProductStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext *chooseFlowStepContext; // @synthesize chooseFlowStepContext=_chooseFlowStepContext;
@property(retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext *welcomeStepContext; // @synthesize welcomeStepContext=_welcomeStepContext;
@property(nonatomic) BOOL allowsAddLater; // @synthesize allowsAddLater=_allowsAddLater;
@property(retain, nonatomic) NSString *backStepIdentifier; // @synthesize backStepIdentifier=_backStepIdentifier;
@property(retain, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIssuerVerificationCodeStepContext;
@property(readonly, nonatomic) BOOL hasIssuerVerificationFieldsStepContext;
@property(readonly, nonatomic) BOOL hasIssuerVerificationChannelsStepContext;
@property(readonly, nonatomic) BOOL hasProvisioningResultStepContext;
@property(readonly, nonatomic) BOOL hasProvisioningProgressStepContext;
@property(readonly, nonatomic) BOOL hasTermsAndConditionsStepContext;
@property(readonly, nonatomic) BOOL hasProductDisambiguationStepContext;
@property(readonly, nonatomic) BOOL hasLocalDeviceManualEntryProgressStepContext;
@property(readonly, nonatomic) BOOL hasLocalDeviceManualEntryStepContext;
@property(readonly, nonatomic) BOOL hasSecondaryManualEntryStepContext;
@property(readonly, nonatomic) BOOL hasManualEntryStepContext;
@property(readonly, nonatomic) BOOL hasReaderModeIngestionStepContext;
@property(readonly, nonatomic) BOOL hasReaderModeEntryStepContext;
@property(readonly, nonatomic) BOOL hasMoreInformationStepContext;
@property(readonly, nonatomic) BOOL hasDigitalIssuancePaymentStepContext;
@property(readonly, nonatomic) BOOL hasDigitalIssuanceAmountStepContext;
@property(readonly, nonatomic) BOOL hasChooseCredentialsStepContext;
@property(readonly, nonatomic) BOOL hasChooseProductStepContext;
@property(readonly, nonatomic) BOOL hasChooseFlowStepContext;
@property(readonly, nonatomic) BOOL hasWelcomeStepContext;
@property(nonatomic) BOOL hasAllowsAddLater;
@property(readonly, nonatomic) BOOL hasBackStepIdentifier;

@end
