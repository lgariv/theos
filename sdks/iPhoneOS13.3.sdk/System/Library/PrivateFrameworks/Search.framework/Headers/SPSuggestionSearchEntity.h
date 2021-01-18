//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPSuggestionSearchEntity : SPSearchEntity
{
    NSString *_queryString;
    NSString *_tokenText;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *tokenText; // @synthesize tokenText=_tokenText;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
// - (void).cxx_destruct;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
