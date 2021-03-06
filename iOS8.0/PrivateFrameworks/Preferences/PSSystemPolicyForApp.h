//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSSystemPolicyForApp : NSObject
{
    unsigned int _policyOptions;
    BOOL _forcePolicyOptions;
    NSString *_bundleIdentifier;
}

+ (BOOL)isServiceRestricted:(id)arg1;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)_privacyAccessForService:(struct __CFString *)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (struct __CFBundle *)copyTCCBundleForService:(struct __CFString *)arg1;
- (id)privacySpecifierForService:(struct __CFString *)arg1;
- (id)privacySpecifier;
- (BOOL)_isLocationServicesRestricted;
- (id)locationServicesSpecifier;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)_isBackgroundAppRefreshRestricted;
- (BOOL)_supportsBackgroundAppRefresh;
- (id)backgroundAppRefreshSpecifier;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)cellularSpecifier;
- (BOOL)_isCellularDataRestricted;
- (BOOL)isCellularBundleID:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (id)_sectionInfo;
- (id)notificationSpecifier;
- (id)specifiersForPolicyOptions:(unsigned int)arg1 force:(BOOL)arg2;
- (id)specifiers;
- (id)initWithBundleIdentifier:(id)arg1;

@end

