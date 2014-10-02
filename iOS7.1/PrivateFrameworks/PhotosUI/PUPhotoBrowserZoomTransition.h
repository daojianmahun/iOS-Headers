//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import "PUTransitionViewAnimatorDelegate.h"

@class PUPhotoPinchGestureRecognizer, PUTransitionViewAnimator, UIImageView;

@interface PUPhotoBrowserZoomTransition : PUNavigationTransition <PUTransitionViewAnimatorDelegate>
{
    UIImageView *_impostorImageView;
    id _userInteractionDisabledToken;
    CDUnknownBlockType _individualAnimationCompletion;
    BOOL _useFallbackAnimation;
    BOOL _shouldEnd;
    BOOL _didFinish;
    id <PUPhotoBrowserZoomTransitionDelegate> _delegate;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUTransitionViewAnimator *__transitionViewAnimator;
}

@property(retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator; // @synthesize _transitionViewAnimator=__transitionViewAnimator;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property(nonatomic) __weak id <PUPhotoBrowserZoomTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionDidStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)transitionWillStartOperation:(int)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)_endTransitionViewAnimatorForceCancel:(BOOL)arg1;
- (void)_animationTransitionForOperation:(int)arg1 betweenViewController:(id)arg2 andPhotoBrowserController:(id)arg3;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;
- (id)_fullsizedImageForPhoto:(id)arg1;
- (void)_setImageForImpostor:(id)arg1 photo:(id)arg2 photoToken:(id)arg3 fromDataProvider:(id)arg4;
- (id)_thumbnailImageForPhoto:(id)arg1;
- (void)_transitionDidFinishAnimationForOperation:(int)arg1;
- (void)_transitionWillBeginAnimationForOperation:(int)arg1;
- (void)_setSourceViewVisible:(BOOL)arg1 forPhotoToken:(id)arg2;
- (BOOL)_getFrame:(struct CGRect *)arg1 contentMode:(int *)arg2 forPhotoToken:(id)arg3 operation:(int)arg4;
- (id)_tokenForPhoto:(id)arg1 inContainer:(id)arg2;

@end
