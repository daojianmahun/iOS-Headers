/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AFUISnippetController.h"

@class SAUIConfirmationOptions, SBAssistantConfirmView;

@interface SBAssistantConfirmController : AFUISnippetController
{
    SBAssistantConfirmView *_view;
    SAUIConfirmationOptions *_model;
    int _confirmTrigger;
}

- (id)initWithAceObject:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (BOOL)_wantsStaticPresentation;
- (id)view;
- (void)_sendCommandsAndDismiss:(id)arg1 stampingMostRecentSnippetWithCancel:(BOOL)arg2;
- (void)_cancelButtonHit:(id)arg1;
- (void)_confirmButtonHit:(id)arg1;

@end

