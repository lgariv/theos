//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@interface WFWeatherChannelRequestFormatterV3 : NSObject <WFForecastRequestFormatter>
{
}

+ (id)forecastRequestForComponents:(id)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5;
+ (id)forecastRequest:(id)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5 rules:(id)arg6;
+ (id)hostURLForService;
+ (id)forecastRequest:(NSUInteger)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5;
+ (id)forecastRequest:(NSUInteger)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;

@end

