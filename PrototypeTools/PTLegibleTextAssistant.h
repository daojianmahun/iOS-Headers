/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PTLegibleTextAssistantSettings;

@interface PTLegibleTextAssistant : NSObject
{
    BOOL _effectsDisabled;
    PTLegibleTextAssistantSettings *_settings;
    float _alphaStrength;
    float _radiusStrength;
    float _largestShadowRadius;
    CDStruct_d4b298fb _imageStatistics;
}

@property(nonatomic) float largestShadowRadius; // @synthesize largestShadowRadius=_largestShadowRadius;
@property(nonatomic) BOOL effectsDisabled; // @synthesize effectsDisabled=_effectsDisabled;
@property(nonatomic) float radiusStrength; // @synthesize radiusStrength=_radiusStrength;
@property(nonatomic) float alphaStrength; // @synthesize alphaStrength=_alphaStrength;
@property(retain, nonatomic) PTLegibleTextAssistantSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) CDStruct_d4b298fb imageStatistics; // @synthesize imageStatistics=_imageStatistics;
- (void).cxx_destruct;
- (struct CGRect)legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2;
- (id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2;
- (id)initWithImageStatistics:(CDStruct_d4b298fb)arg1;

@end

