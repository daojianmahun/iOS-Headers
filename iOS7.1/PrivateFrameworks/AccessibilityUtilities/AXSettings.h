//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface AXSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_axFeatureQueue;
    NSMutableSet *_registeredNotifications;
    NSMutableDictionary *_synchronizeDomains;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *axFeatureQueue; // @synthesize axFeatureQueue=_axFeatureQueue;
- (id)_featureIDForTripleClickOption:(int)arg1;
- (id)_tripleClickOptionForAXFeatureID:(id)arg1;
- (void)_setAXFeature:(id)arg1 enabled:(BOOL)arg2;
- (void)disableAccessibilityTripleClickOptionsForFeatures:(id)arg1;
- (void)enableAccessibilityTripleClickOptionsForFeatures:(id)arg1;
- (void)disableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;
- (void)enableOnlyAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;
- (void)enableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;
- (id)accessibilityFeatureIDs;
- (id)accessibilityFeatureIDsForTripleClickOptions:(id)arg1;
- (id)accessibilityTripleClickOptions;
- (id)accessibilityFeatureStatus;
@property(nonatomic) float reduceWhitePointLevel;
@property(nonatomic) BOOL shouldStreamToRightAid;
@property(nonatomic) BOOL shouldStreamToLeftAid;
@property(nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property(nonatomic) BOOL voiceOverShouldOutputToHearingAid;
- (float)voiceOverSpeakingRateForLanguage:(id)arg1;
- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;
@property(nonatomic) BOOL voiceOverShowSoftwareKeyboardWithBraille;
@property(nonatomic) BOOL voiceOverBrailleGradeTwoAutoTranslateEnabled;
@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeSpellCheckingEnabled;
@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;
@property(copy, nonatomic) NSString *voiceOverDefaultDialect;
@property(nonatomic) BOOL voiceOverAlwaysUseNemethCodeForMathEnabled;
@property(copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;
@property(copy, nonatomic) NSArray *voiceOverRotorItems;
@property(nonatomic) BOOL voiceOverSpeakNotificationsInLockScreenEnabled;
@property(nonatomic) BOOL voiceOverSpeakingRateInRotorEnabled;
@property(nonatomic) BOOL voiceOverSoundEffectsEnabled;
@property(nonatomic) BOOL voiceOverPitchChangeEnabled;
@property(nonatomic) BOOL voiceOverHintsEnabled;
@property(readonly, nonatomic) BOOL voiceOverHandwritingEnabled;
@property(nonatomic) BOOL voiceOverCompactVoiceEnabled;
@property(nonatomic) int voiceOverActivationWorkaround;
@property(nonatomic) int voiceOverSoftwareTypingFeedback;
@property(nonatomic) int voiceOverHardwareTypingFeedback;
@property(nonatomic) int voiceOverPhoneticsFeedback;
@property(nonatomic) int voiceOverNavigateImagesOption;
@property(nonatomic) int voiceOverHelpMode;
@property(nonatomic) BOOL voiceOverLargeCursorEnabled;
- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;
- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;
@property(nonatomic) float quickSpeakSpeakingRate;
@property(nonatomic) BOOL quickSpeakHighlightText;
@property(nonatomic) float quickSpeakVolume;
@property(nonatomic) BOOL speakCorrectionsEnabled;
@property(nonatomic) BOOL enableHearingAidReporter;
@property(nonatomic) BOOL skipHearingAidMFiAuth;
@property(nonatomic) BOOL voiceOverHearingAidRoutingEnabled;
@property(nonatomic) int internalLoggingColorTheme;
@property(nonatomic) BOOL logAXNotificationPosting;
@property(nonatomic) BOOL ignoreAXServerEntitlements;
@property(nonatomic) BOOL ignoreAXAssertions;
@property(nonatomic) BOOL writeAXLogsToFile;
@property(nonatomic) BOOL includeBacktraceInLogs;
@property(nonatomic) BOOL validateSecondPartyApps;
@property(nonatomic) BOOL assistiveTouchHeadlessModeEnabled;
@property(nonatomic) BOOL assistiveTouchCameraSwitchPreviewEnabled;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;
@property(copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;
@property(copy, nonatomic) NSString *gaxInternalSettingsDeviceID;
@property(nonatomic) BOOL gaxInternalSettingsSystemDidRestartDueToLowBattery;
@property(nonatomic) BOOL gaxInternalSettingsIsActiveAppSelfLocked;
@property(copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;
@property(retain, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;
@property(retain, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;
@property(nonatomic) BOOL guidedAccessAXFeaturesEnabled;
@property(nonatomic) int guidedAccessUsageCount;
@property(nonatomic) BOOL assistiveTouchScannerAddedTripleClickAutomatically;
@property(nonatomic) BOOL assistiveTouchSwitchUsageConfirmed;
@property(nonatomic) int assistiveTouchHeadMovementSensitivity;
@property(nonatomic) int assistiveTouchCursorColor;
@property(retain, nonatomic) NSSet *assistiveTouchSwitches;
@property(nonatomic) double assistiveTouchScannerSpeechRate;
@property(nonatomic) BOOL assistiveTouchScannerSpeechEnabled;
@property(nonatomic) BOOL assistiveTouchScannerSoundEnabled;
@property(nonatomic) int assistiveTouchScanCycles;
@property(nonatomic) double assistiveTouchScanTimeout;
@property(nonatomic) BOOL assistiveTouchScanTimeoutEnabled;
@property(nonatomic) BOOL assistiveTouchSelectTimeoutEnabled;
@property(nonatomic) double assistiveTouchSelectTimeout;
@property(nonatomic) double assistiveTouchStepInterval;
@property(nonatomic) BOOL assistiveTouchInputCoalescingEnabled;
@property(nonatomic) double assistiveTouchInputCoalescingDuration;
@property(nonatomic) BOOL assistiveTouchInputHoldEnabled;
@property(nonatomic) double assistiveTouchInputHoldDuration;
@property(nonatomic) BOOL assistiveTouchDelayAfterInputEnabled;
@property(nonatomic) double assistiveTouchDelayAfterInput;
@property(nonatomic) BOOL assistiveTouchActionRepeatEnabled;
@property(nonatomic) double assistiveTouchActionRepeatInterval;
@property(nonatomic) float assistiveTouchAxisSweepSpeed;
@property(readonly, nonatomic) int assistiveTouchScannerIncludedMenuItems;
@property(nonatomic) BOOL assistiveTouchScannerMenuIncludeSettingsItem;
@property(nonatomic) BOOL assistiveTouchScannerMenuIncludeGesturesItem;
@property(nonatomic) BOOL assistiveTouchScannerMenuIncludeDeviceItem;
@property(nonatomic) BOOL assistiveTouchScannerMenuIncludeScrollItem;
@property(nonatomic) BOOL assistiveTouchScannerMenuIncludeHomeItem;
@property(nonatomic) BOOL assistiveTouchScannerMenuLabelsEnabled;
@property(nonatomic) BOOL assistiveTouchScannerCompactMenuEnabled;
@property(nonatomic) BOOL assistiveTouchGroupElementsEnabled;
@property(nonatomic) BOOL assistiveTouchScannerPointPickerDefaultsToRescan;
@property(nonatomic) BOOL assistiveTouchAutoScanningEnabled;
@property(nonatomic) int assistiveTouchScanningMode;
@property(nonatomic) BOOL assistiveTouchScannerCursorHighVisibilityEnabled;
@property(nonatomic) BOOL assistiveTouchScannerSpeechIsInterruptedByScanning;
@property(nonatomic) int assistiveTouchPreferredPointPicker;
@property(retain, nonatomic) NSArray *assistiveTouchSavedGestures;
@property(retain, nonatomic) NSArray *assistiveTouchRecentGestures;
@property(retain, nonatomic) NSArray *assistiveTouchCustomGestures;
@property(nonatomic) double assistiveTouchSpeed;
@property(nonatomic) BOOL assistiveTouchOpenMenuSwaggleEnabled;
@property(nonatomic) BOOL assistiveTouchAlwaysShowMenuEnabled;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;
- (BOOL)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_migratePreferenceIfNecessary:(id)arg1;
- (struct __CFString *)_domainNameForDomain:(int)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (int)_domainForPreferenceKey:(id)arg1;

@end

