/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMConnectionMonitorDelegate-Protocol.h"
#import "IMServiceSessionProtocol-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IMConnectionMonitor, IMDAccount, IMDService, IMSystemProxySettingsFetcher, IMTimer, NSDictionary, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSTimer;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol>
{
    NSRecursiveLock *_lock;
    IMDAccount *_account;
    NSString *_loginStatusMessage;
    NSMutableDictionary *_localProperties;
    NSMutableSet *_changedBuddies;
    NSMutableSet *_registeredChats;
    NSMutableDictionary *_groupChatIdentifierToChatRoomMap;
    NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
    IMTimer *_messageRoutingTimer;
    NSTimer *_storageTimer;
    NSMutableSet *_messagesReceivedDuringStorage;
    IMConnectionMonitor *_connectionMonitor;
    NSTimer *_reconnectTimer;
    NSString *_loginID;
    NSString *_pwRequestID;
    IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;
    int _buddyChangeLevel;
    unsigned int _loginStatus;
    int _disconnectReason;
    _Bool _activated;
    _Bool _saveKeychainPassword;
    _Bool _awaitingDataContext;
    _Bool _shouldReconnect;
    _Bool _badPass;
    IMDService *_service;
    NSMutableDictionary *_buddies;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
    NSString *_password;
    NSString *_serverHost;
    long long _proxyType;
    unsigned short _proxyPort;
    _Bool _useSSL;
    unsigned short _serverPort;
}

@property(readonly, nonatomic) int serviceDisconnectReason; // @synthesize serviceDisconnectReason=_disconnectReason;
@property(readonly, nonatomic) unsigned int serviceLoginStatus; // @synthesize serviceLoginStatus=_loginStatus;
@property(readonly, nonatomic) NSString *serviceLoginStatusMessage; // @synthesize serviceLoginStatusMessage=_loginStatusMessage;
@property(readonly, nonatomic) IMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) IMDAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(readonly, nonatomic) NSString *proxyAccount; // @synthesize proxyAccount=_proxyAccount;
@property(readonly, nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;
@property(readonly, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property(readonly, nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;
@property(readonly, nonatomic) unsigned short serverPort; // @synthesize serverPort=_serverPort;
@property(readonly, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (void)systemDidUnlock;
- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;
- (id)broadcasterForVCConferenceListeners;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForChatObserverListeners;
- (id)broadcasterForChatListeners;
- (id)broadcaster;
- (void)refreshServiceCapabilities;
- (_Bool)equalID:(id)arg1 andID:(id)arg2;
- (id)canonicalFormOfChatRoom:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (void)_managedPrefsNotification:(id)arg1;
@property(readonly, nonatomic) _Bool allowedAsChild;
@property(readonly, nonatomic) _Bool networkConditionsAllowLogin;
- (void)_networkChanged:(id)arg1;
- (void)_callMonitorStateChanged:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)_processPotentialNetworkChange;
- (void)_setPendingConnectionMonitorUpdate;
- (void)_processConnectionMonitorUpdate;
- (void)_reconnectIfNecessary;
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(_Bool)arg1;
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;
- (void)_clearConnectionMonitor;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
@property(readonly, nonatomic) NSDictionary *accountDefaults;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool accountShouldBeAlwaysLoggedIn;
@property(readonly, nonatomic) _Bool accountNeedsPassword;
@property(readonly, nonatomic) _Bool accountNeedsLogin;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;

@end
