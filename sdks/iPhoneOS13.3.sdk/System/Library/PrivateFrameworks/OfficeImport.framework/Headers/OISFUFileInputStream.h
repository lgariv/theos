//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

__attribute__((visibility("hidden")))
@interface OISFUFileInputStream : NSObject <SFUInputStream>
{
    int mFd;
    BOOL mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;

@end

