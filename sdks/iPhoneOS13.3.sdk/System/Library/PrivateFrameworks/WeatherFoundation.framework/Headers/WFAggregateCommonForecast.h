//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WFAirQualityConditions, WFWeatherConditions;

@interface WFAggregateCommonForecast : NSObject
{
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentObservations;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_hourlyForecastedConditions;
    NSArray *_dailyForecastedConditions;
    NSArray *_dailyPollenForecastedConditions;
}

@property(retain, nonatomic) NSArray *dailyPollenForecastedConditions; // @synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions;
@property(retain, nonatomic) NSArray *dailyForecastedConditions; // @synthesize dailyForecastedConditions=_dailyForecastedConditions;
@property(retain, nonatomic) NSArray *hourlyForecastedConditions; // @synthesize hourlyForecastedConditions=_hourlyForecastedConditions;
@property(retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // @synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations;
@property(retain, nonatomic) WFWeatherConditions *currentObservations; // @synthesize currentObservations=_currentObservations;
@property(retain, nonatomic) WFAirQualityConditions *airQualityObservations; // @synthesize airQualityObservations=_airQualityObservations;
// - (void).cxx_destruct;

@end
