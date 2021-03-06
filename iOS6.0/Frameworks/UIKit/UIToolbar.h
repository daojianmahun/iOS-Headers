/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "_UIShadowedView-Protocol.h"

@class NSArray, UIColor, UIImageView;

@interface UIToolbar : UIView <_UIShadowedView>
{
    id _delegate;
    NSArray *_items;
    UIColor *_tintColor;
    struct {
        unsigned int barStyle:2;
        unsigned int mode:2;
        unsigned int wasEnabled:1;
        unsigned int downButtonSentAction:1;
        unsigned int isTranslucent:1;
        unsigned int forceTopBarAppearance:1;
        unsigned int autolayoutIsLocked:1;
    } _toolbarFlags;
    struct __CFDictionary *_groups;
    NSArray *_buttonItems;
    int _currentButtonGroup;
    int _pressedTag;
    float _extraEdgeInsets;
    UIView *_backgroundView;
    id _appearanceStorage;
    id _currentAlert;
    UIImageView *_shadowView;
    float *_fadedItemAlphas;
}

+ (float)defaultHeightForBarSize:(int)arg1;
+ (float)defaultSelectionModeHeight;
+ (float)defaultHeight;
+ (id)defaultButtonFont;
+ (Class)defaultTextButtonClass;
+ (Class)defaultButtonClass;
+ (float)_buttonGap;
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)_setHidesShadow:(BOOL)arg1;
- (BOOL)_hidesShadow;
- (id)shadowImageForToolbarPosition:(int)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(int)arg2;
- (id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned int)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)layoutSubviews;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_activityViewControllerIsDisappearing:(id)arg1;
- (void)_activityViewControllerIsAppearing:(id)arg1;
- (void)_alertIsDisappearing:(id)arg1;
- (void)_alertIsAppearing:(id)arg1;
- (void)_fadeInItems;
- (void)_fadeOutItems;
- (BOOL)isMinibar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (struct CGSize)defaultSizeForOrientation:(int)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_didFinishHidingRetainedOldItems:(id)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isTranslucent) BOOL translucent;
- (void)_setTintColor:(id)arg1 force:(BOOL)arg2;
@property(copy, nonatomic) NSArray *items;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)mode;
- (void)setMode:(int)arg1;
@property(nonatomic) int barStyle;
- (void)setBarStyle:(int)arg1 force:(BOOL)arg2;
- (void)_updateOpacity;
- (float)extraEdgeInsets;
- (void)setExtraEdgeInsets:(float)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (id)_backgroundView;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (struct CGRect)_frameOfBarButtonItem:(id)arg1;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (void)setButtonItems:(id)arg1;
- (id)buttonItems;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2;
- (BOOL)onStateForButton:(int)arg1;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)getVisibleButtonTags:(int *)arg1 count:(unsigned int *)arg2 maxItems:(unsigned int)arg3;
- (int)currentButtonGroup;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)registerButtonGroup:(int)arg1 withButtons:(int *)arg2 withCount:(int)arg3;
- (void)showButtons:(int *)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (void)_buttonBarFinishedAnimating;
- (void)positionButtons:(id)arg1 tags:(int *)arg2 count:(int)arg3 group:(int)arg4;
- (id)createButtonWithDescription:(id)arg1;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItemList:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_subclassImplementsDrawRect;
- (id)initInView:(id)arg1 withItems:(CDStruct_dbaf35c5 *)arg2 withCount:(int)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect)arg2 withItems:(CDStruct_dbaf35c5 *)arg3 withCount:(int)arg4;
- (BOOL)_isTopBar;
- (BOOL)_isInNavigationBar;
- (id)_customToolbarAppearance;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 actuallyRepositionButtons:(BOOL)arg3;
- (void)_updateBackgroundImage;
- (id)_currentCustomBackgroundRespectOversize:(char *)arg1;
@property(nonatomic, setter=_setAutoLayoutIsLocked:) BOOL _autolayoutIsLocked;
- (float)_edgeMarginForBorderedItem:(BOOL)arg1;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_finishButtonAnimation:(int)arg1 forButton:(int)arg2;
- (id)_currentButtons;
- (void)_showButtons:(int *)arg1 withCount:(int)arg2 group:(int)arg3 withDuration:(double)arg4 adjustPositions:(BOOL)arg5 skipTag:(int)arg6;
- (id)_buttonWithDescription:(id)arg1;
- (void)_adjustButtonPressed:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (id)_descriptionForTag:(int)arg1;
- (id)scriptingInfoWithChildren;
- (void)_updateScriptingInfo:(id)arg1 view:(id)arg2;
- (id)_buttonName:(id)arg1 withType:(int)arg2;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;

@end

