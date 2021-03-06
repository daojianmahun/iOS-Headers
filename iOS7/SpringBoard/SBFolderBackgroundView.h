/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBWallpaperObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class SBFolderSettings, SBWallpaperEffectView, UIImageView;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver>
{
    SBWallpaperEffectView *_backdropView;
    UIImageView *_backgroundImageView;
    SBFolderSettings *_folderSettings;
}

+ (double)cornerRadiusToInsetContent;
+ (struct CGSize)folderBackgroundSize;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureBackground;
- (void)adjustCornerRadiusForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

