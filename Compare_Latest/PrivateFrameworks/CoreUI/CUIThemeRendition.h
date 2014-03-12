/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken stackKey[16];
    struct _renditionkeytoken *key;
    long long type;
    unsigned int subtype;
    unsigned int scale;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int reserved:30;
    } renditionFlags;
    long long artworkStatus;
    unsigned long long colorSpaceID;
    NSString *name;
    NSData *srcData;
    long long validLookGradation;
    double opacity;
    int blendMode;
}

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1;
@property(nonatomic) int blendMode; // @synthesize blendMode;
@property(nonatomic) double opacity; // @synthesize opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (id)effectPreset;
- (unsigned int)subtype;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (_Bool)isScaled;
- (_Bool)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (double)scale;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (struct CGImage *)unslicedImage;
- (id)description;
- (_Bool)isValidForLookGradation:(long long)arg1;
- (unsigned long long)colorSpaceID;
- (long long)artworkStatus;
- (_Bool)isHeaderFlaggedFPO;
- (id)name;
- (long long)type;
- (const struct _renditionkeytoken *)key;
- (void)dealloc;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;

@end
