/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AFVoiceInfo, NSArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
}

- (void).cxx_destruct;
- (void)setLanguage:(id)arg1 withCompletion:(id)arg2;
- (void)setLanguage:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id)arg2;
- (void)_updateVoicesWithCompletion:(id)arg1;
- (void)_updateVoicesSync;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (id)_voices;
- (void)_setVoices:(id)arg1;
- (void)barrier;
- (void)killDaemon;
- (void)setDictationEnabled:(_Bool)arg1;
- (void)setAssistantEnabled:(_Bool)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 setActive:(_Bool)arg2;
- (id)accounts;
- (void)fetchSupportedLanguageCodes:(id)arg1;
- (id)_settingsServiceWithErrorHandler:(id)arg1;
- (id)_settingsService;
- (id)_connection;
- (void)_clearConnection;
- (void)dealloc;
- (id)init;

@end
