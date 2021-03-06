/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol VideoConferenceDelegate
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;

@optional
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
@end

