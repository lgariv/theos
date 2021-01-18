//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLMutableDateRangeFormatter-Protocol.h>

@class NSDateFormatter, NSLocale, NSTimeZone;

@interface PLDateRangeFormatter : NSObject <PLMutableDateRangeFormatter>
{
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat _monthDayIntervalFormat;
    struct UDateIntervalFormat _monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat _differentMonthDayIntervalFormat;
    struct UDateIntervalFormat _differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat _dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat _timeIntervalFormat;
    struct UDateIntervalFormat _monthIntervalFormat;
    struct UDateIntervalFormat _yearIntervalFormat;
    id _currentLocaleDidChangeNotificationObserver;
    id _currentTimeZoneDidChangeNotificationObserver;
    id _significantTimeChangeNotificationObserver;
    BOOL _autoUpdateOnChanges;
    BOOL _useLocalDates;
    BOOL _shouldOmitYear;
    NSLocale *_locale;
    NSTimeZone *_timeZone;
}

@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) BOOL shouldOmitYear; // @synthesize shouldOmitYear=_shouldOmitYear;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL useLocalDates; // @synthesize useLocalDates=_useLocalDates;
@property(nonatomic) BOOL autoUpdateOnChanges; // @synthesize autoUpdateOnChanges=_autoUpdateOnChanges;
// - (void).cxx_destruct;
- (void)configureForFormatPreset:(NSUInteger)arg1;
- (void)_handleNotification:(id)arg1;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (void)_updateYearIntervalFormat;
- (void)_updateMonthIntervalFormat;
- (void)_updateTimeIntervalFormat;
- (void)_updateDayOfTheWeekIntervalFormat;
- (void)_updateDifferentMonthDayNoYearIntervalFormat;
- (void)_updateDifferentMonthDayIntervalFormat;
- (void)_updateMonthDayNoYearIntervalFormat;
- (void)_updateMonthDayIntervalFormat;
- (void)_updateRelativeDateFormatter;
- (void)_updateMonthDateFormatter;
- (void)_updateYearDateFormatter;
- (void)_updateDayOfTheWeekDateFormatter;
- (void)_updateSameDayNoYearDateFormatter;
- (void)_updateSameDayDateFormatter;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayTemplate;
- (id)_sameMonthTemplate;
- (void)_updateFormatters;
- (void)_updateTimeZone;
- (void)dealloc;
- (id)init;
- (id)initWithFormatPreset:(NSUInteger)arg1 autoUpdateOnChanges:(BOOL)arg2;
- (id)initWithFormatPreset:(NSUInteger)arg1 configurationBlock:(id /* CDUnknownBlockType */)arg2;

@end
