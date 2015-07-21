//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSBackgroundActivityInternal : NSObject
{
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    CDUnknownBlockType _activity;
    CDUnknownBlockType _checkInHandler;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
    void *_additionalProperties;
    long long _qualityOfService;
    struct _xpc_activity_s *_currentActivity;
}

@property(getter=isAppRefresh) BOOL appRefresh; // @synthesize appRefresh=_appRefresh;
@property BOOL repeats; // @synthesize repeats=_repeats;
@property(copy) CDUnknownBlockType checkInHandler; // @synthesize checkInHandler=_checkInHandler;
@property double delay; // @synthesize delay=_delay;
@property BOOL preregistered; // @synthesize preregistered=_preregistered;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy) CDUnknownBlockType activity; // @synthesize activity=_activity;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property double interval; // @synthesize interval=_interval;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setAdditionalProperties:(void *)arg1;
- (void *)additionalProperties;
- (void)setCurrentActivity:(struct _xpc_activity_s *)arg1;
- (struct _xpc_activity_s *)currentActivity;
- (void)dealloc;
- (id)init;

@end
