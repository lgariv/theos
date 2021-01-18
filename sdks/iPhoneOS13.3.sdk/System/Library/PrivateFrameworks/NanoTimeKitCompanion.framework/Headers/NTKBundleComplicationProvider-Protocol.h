//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKDevice, NSString, NTKComplication;

#ifndef NTKBundleComplicationProvider_Protocol
#define NTKBundleComplicationProvider_Protocol

@protocol NTKBundleComplicationProvider <NSObject>
- (BOOL)bundleComplicationExistsForAppBundleIdentifier:(NSString *)arg1;
- (Class)dataSourceClassForBundleComplication:(NTKComplication *)arg1;
- (NSString *)localizedAppNameForBundleIdentifier:(NSString *)arg1;
- (void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(CLKDevice *)arg2 withBlock:(void (^)(NSString *, NSString *, NSNumber *))arg3;
@end

#endif
