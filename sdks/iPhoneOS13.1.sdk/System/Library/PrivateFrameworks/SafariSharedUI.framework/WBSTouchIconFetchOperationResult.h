//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WBSTouchIconFetchOperationResult : NSObject
{
    _Bool _favicon;
    _Bool _pageRequestDidSucceed;
    _Bool _higherPriorityIconDownloadFailedDueToNetworkError;
    UIImage *_touchIcon;
    NSString *_host;
}

+ (id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(_Bool)arg3 pageRequestDidSucceed:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5;
+ (id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property(readonly, nonatomic) _Bool pageRequestDidSucceed; // @synthesize pageRequestDidSucceed=_pageRequestDidSucceed;
@property(readonly, nonatomic, getter=isFavicon) _Bool favicon; // @synthesize favicon=_favicon;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
- (id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(_Bool)arg3 pageRequestDidSucceed:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5;

@end
