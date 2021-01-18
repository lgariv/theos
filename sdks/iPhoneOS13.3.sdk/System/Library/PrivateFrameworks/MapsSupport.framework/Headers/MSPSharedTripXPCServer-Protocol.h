//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol MSPSharedTripXPCServer <NSObject>
- (void)blockSharedTrip:(NSString *)arg1;
- (void)fetchSharedTripsWithCompletion:(void (^)(NSArray *))arg1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(NSString *)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(NSString *)arg1;
- (void)fetchActiveHandlesWithCompletion:(void (^)(NSArray *))arg1;
- (void)stopSharingTrip;
- (void)stopSharingTripWithMessagesGroup:(NSString *)arg1;
- (void)startSharingTripWithMessagesGroup:(NSString *)arg1;
- (void)stopSharingTripWithMessagesContacts:(NSArray *)arg1;
- (void)startSharingTripWithMessagesContacts:(NSArray *)arg1;
- (void)stopSharingTripWithContacts:(NSArray *)arg1;
- (void)startSharingTripWithContacts:(NSArray *)arg1;
- (void)fetchSendingIdentityWithCompletion:(void (^)(NSString *, NSString *))arg1;
- (void)fetchAccountValidWithCompletion:(void (^)(BOOL))arg1;
- (void)checkin;
@end
