//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSHapticFeedbackPerformer.h"

@class NSString;

@interface NSTouchDevice : NSObject <NSHapticFeedbackPerformer>
{
    unsigned long long _deviceID;
    long long _reserved1;
    double _reserved2;
    long long _flags;
    struct CGSize _surfaceSize;
    id _reserved3[3];
}

+ (void)_touchDeviceRemoved:(id)arg1;
+ (void)_touchDeviceAdded:(id)arg1;
+ (BOOL)_hasForceCapableTouchDevice;
+ (BOOL)_hasPressureEnabledTouchDevice;
+ (id)_touchDeviceFromTrueDeviceID:(unsigned long long)arg1;
+ (id)touchDeviceFromDeviceID:(unsigned long long)arg1;
+ (id)touchDevices;
+ (id)_touchDeviceWithIOHIDDictionary:(id)arg1;
+ (void)_pressureCapabilitiesPrefChanged:(id)arg1;
+ (void)initialize;
@property(readonly) struct CGSize surfaceSize; // @synthesize surfaceSize=_surfaceSize;
@property(readonly) unsigned long long deviceID; // @synthesize deviceID=_deviceID;
- (BOOL)supportsForce;
- (BOOL)hasActuation;
- (id)_cancelledTouches;
- (id)_touchingTouches;
- (id)_deviceInfo;
- (void)setOverridePressureConfiguration:(id)arg1;
- (void)performFeedbackPattern:(long long)arg1 performanceTime:(unsigned long long)arg2;
- (unsigned long long)_trueDeviceID;
- (long long)deviceType;
- (id)_initWithIOHIDDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

