//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REExportedValueEncoder : NSObject
{
    NSUInteger _options;
}

- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(id /* CDUnknownBlockType */)arg2 isLast:(BOOL)arg3;
- (void)writeArrayEndToStream:(id)arg1;
- (void)writeArrayStartToStream:(id)arg1;
- (BOOL)writesArrayHeader;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(id /* CDUnknownBlockType */)arg2 valueWriter:(id /* CDUnknownBlockType */)arg3 isLast:(BOOL)arg4;
- (void)writeDictionaryEndToStream:(id)arg1;
- (void)writeDictionaryStartToStream:(id)arg1;
- (BOOL)writesDictionaryHeader;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(id /* CDUnknownBlockType */)arg2 valueWriter:(id /* CDUnknownBlockType */)arg3 isLast:(BOOL)arg4;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (id)_namesArrayFromArray:(id)arg1;
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(id /* CDUnknownBlockType */)arg3 writerBlock:(id /* CDUnknownBlockType */)arg4 endBlock:(id /* CDUnknownBlockType */)arg5 wantsHeader:(BOOL)arg6 depth:(NSUInteger)arg7;
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(NSUInteger)arg3 needsIndent:(BOOL)arg4;
- (id)dataFromExportedValue:(id)arg1;
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;
- (id)initWithOptions:(NSUInteger)arg1;

@end
