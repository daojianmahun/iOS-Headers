/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSEditingPane.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class MFMailComposeViewController, NSLock, NSString, NSTimer, PSRootController, UITextView;

@interface LoggingPane : PSEditingPane <MFMailComposeViewControllerDelegate>
{
    UITextView *_textView;
    _Bool _threadRunning;
    _Bool _timeout;
    _Bool _fileError;
    _Bool _dontScroll;
    NSLock *_lock;
    NSTimer *_timer;
    NSString *_output;
    PSRootController *_rootController;
    MFMailComposeViewController *_mailComposeController;
    int _sendingEmailCount;
}

+ (id)systemVersionDescription;
- (void)saveLogFile;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)textView;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopTimer;
- (void)dealloc;
- (_Bool)handlesDoneButton;

@end

