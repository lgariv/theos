//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSRule.h>


@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying>
{
    IKCSSMediaQuery *_mediaQuery;
    NSRange _queryRange;
}

@property(nonatomic) NSRange queryRange; // @synthesize queryRange=_queryRange;
// - (void).cxx_destruct;
- (id)description;
- (id)mediaQuery;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithMediaQuery:(id)arg1;

@end
