//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMLTrainingLogEntry : NSObject
{
    double _timestamp;
    NSUInteger _serverIteration;
}

@property(readonly) NSUInteger serverIteration; // @synthesize serverIteration=_serverIteration;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(double)arg1 serverIteration:(NSUInteger)arg2;

@end
