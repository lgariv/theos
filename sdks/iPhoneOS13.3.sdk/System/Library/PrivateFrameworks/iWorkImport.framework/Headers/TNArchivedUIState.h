//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TNUIState;

__attribute__((visibility("hidden")))
@interface TNArchivedUIState : TSPObject
{
    TNUIState *_uiState;
}

@property(readonly, nonatomic) TNUIState *uiState; // @synthesize uiState=_uiState;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithUIState:(id)arg1 context:(id)arg2;

@end
