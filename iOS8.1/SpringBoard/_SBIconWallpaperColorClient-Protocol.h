//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBIconColorSettings;

@protocol _SBIconWallpaperColorClient <NSObject>
- (_Bool)isBlurring;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperColor:(struct CGColor *)arg1 phase:(struct CGSize)arg2;
- (_Bool)wantsBlur:(SBIconColorSettings *)arg1;
- (struct CGRect)wallpaperRelativeBounds;
@end
