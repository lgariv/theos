//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionalResolverModifierInstructions-Protocol.h>

@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions>
{
    id <SXDocumentProviding> _documentProvider;
    id <SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;
}

@property(readonly, nonatomic) id <SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider; // @synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
// - (void).cxx_destruct;
- (id)hints;
@property(readonly, nonatomic) BOOL shouldResolveTextStyles;
@property(readonly, nonatomic) BOOL shouldResolveDocumentStyle;
@property(readonly, nonatomic) BOOL shouldResolveComponentTextStyles;
@property(readonly, nonatomic) BOOL shouldResolveComponentStyles;
@property(readonly, nonatomic) BOOL shouldResolveComponentLayouts;
@property(readonly, nonatomic) BOOL shouldResolveComponents;
@property(readonly, nonatomic) BOOL shouldResolveAutoplacement;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;

@end
