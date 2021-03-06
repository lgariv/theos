//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject
{
    NSArray *_lookupItems;
    NSData *_playlistData;
    NSArray *_parsedPlaylistsImportProperties;
}

// - (void).cxx_destruct;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_playlistPropertiesFromPlaylistData:(id)arg1;
- (id)_playlistPropertiesForLookupItems:(id)arg1;
@property(readonly, nonatomic) NSUInteger playlistCount;
@property(readonly, nonatomic) NSArray *parsedStorePlaylistsImportProperties;
@property(readonly, nonatomic) NSData *playlistsData;
- (id)initWithPlaylistsData:(id)arg1;
- (id)initWithLookupItems:(id)arg1;

@end

