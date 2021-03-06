//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFRemoveCalendarItemsAction : WFAction
{
    NSUInteger _requiredConfirmations;
    NSUInteger _currentConfirmation;
}

@property(nonatomic) NSUInteger currentConfirmation; // @synthesize currentConfirmation=_currentConfirmation;
@property(nonatomic) NSUInteger requiredConfirmations; // @synthesize requiredConfirmations=_requiredConfirmations;
- (void)deleteItems:(id)arg1;
- (void)presentConfirmationToDeleteItems:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)accessResource;
- (NSUInteger)entityType;

@end

