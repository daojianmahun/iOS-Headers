//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDNameMappable.h"

__attribute__((visibility("hidden")))
@interface GQDColor : NSObject <GQDNameMappable>
{
    float mRed;
    float mGreen;
    float mBlue;
    float mAlpha;
}

+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)blackColor;
+ (const struct StateSpec *)stateForReading;
+ (id)cmykColorFromReader:(struct _xmlTextReader *)arg1;
+ (id)whiteColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(BOOL)arg2;
+ (id)rgbColorFromReader:(struct _xmlTextReader *)arg1 calibrated:(BOOL)arg2;
+ (void)readColorFromProcessor:(id)arg1 reader:(struct _xmlTextReader *)arg2;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)alphaComponent;
- (float)blueComponent;
- (float)greenComponent;
- (float)redComponent;
- (void)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (id)description;
- (id)initWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (int)htmlBlue;
- (int)htmlGreen;
- (int)htmlRed;

@end
