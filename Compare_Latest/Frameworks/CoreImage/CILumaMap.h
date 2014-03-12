/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

// Not exported
@interface CILumaMap : CIFilter
{
    CIImage *inputImage;
    CIImage *_tableImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (const char *)lumaTable;
- (void)setDefaults;
- (id)_kernel;

@end
