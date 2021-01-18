//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSLocale, NSString;

@interface TIInputMode : NSObject <NSCopying>
{
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
    NSString *_normalizedIdentifier;
}

+ (id)inputModeWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *normalizedIdentifier; // @synthesize normalizedIdentifier=_normalizedIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property(readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property(readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property(readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property(readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property(readonly, nonatomic) NSDictionary *compositionMap;
@property(readonly, nonatomic) NSDictionary *layoutTags;
@property(readonly, nonatomic) NSArray *allAccentKeyStrings;
@property(readonly, nonatomic) BOOL doesComposeText;
@property(readonly, nonatomic) NSString *replacementForDoubleSpace;
@property(readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property(readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property(readonly, nonatomic) BOOL supportsPrediction;
@property(readonly, nonatomic) Class multilingualInputManagerClass;
@property(readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property(readonly, nonatomic) Class inputManagerClass;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic) NSString *variant;
@property(readonly, nonatomic) NSString *languageWithRegion;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithNormalizedIdentifier:(id)arg1;

@end
