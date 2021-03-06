//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoLoadingStateObserverFactory-Protocol.h>

@protocol SVPlayerItemLoaderProviding;

@interface SVVideoLoadingStateObserverFactory : NSObject <SVVideoLoadingStateObserverFactory>
{
    id <SVPlayerItemLoaderProviding> _playerItemLoaderProvider;
}

@property(readonly, nonatomic) id <SVPlayerItemLoaderProviding> playerItemLoaderProvider; // @synthesize playerItemLoaderProvider=_playerItemLoaderProvider;
// - (void).cxx_destruct;
- (id)createLoadingStateObserverForVideo:(id)arg1;
- (id)initWithPlayeryItemLoaderProvider:(id)arg1;

@end

