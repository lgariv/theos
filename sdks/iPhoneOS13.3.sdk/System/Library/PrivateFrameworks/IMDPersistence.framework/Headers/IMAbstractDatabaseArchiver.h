//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject
{
    NSString *_destinationPath;
    NSString *_sourcePath;
}

@property(readonly, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (BOOL)deleteFailedArchiveAtPath:(id)arg1 error:(id )arg2;
- (BOOL)copyDatabase:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2;

@end
