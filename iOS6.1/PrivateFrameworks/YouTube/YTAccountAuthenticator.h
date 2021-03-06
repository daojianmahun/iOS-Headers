/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSDate, NSHTTPURLResponse, NSMutableData, NSString;

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate>
{
    NSString *_accountToken;
    NSDate *_accountTokenDate;
    NSString *_account;
    NSString *_accountYouTubeName;
    NSString *_password;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    NSString *_authURLBase;
}

+ (id)sharedAuthenticator;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *accountYouTubeName; // @synthesize accountYouTubeName=_accountYouTubeName;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSDate *accountTokenDate; // @synthesize accountTokenDate=_accountTokenDate;
@property(retain, nonatomic) NSString *accountToken; // @synthesize accountToken=_accountToken;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_postNewAccountTokenAvailable;
- (id)_passwordFromKeychain;
- (void)_postAccountTokenGenerationFailedWithError:(id)arg1;
- (void)clearAccountInfo;
- (void)_removePasswordFromKeychain;
- (void)_clearURLResponseInfo;
- (void)_getNewTokenForAccount:(id)arg1 password:(id)arg2;
- (id)_authRequestForAccount:(id)arg1 password:(id)arg2;
- (id)_authRequestWithURL:(id)arg1;
- (BOOL)_isTokenExpired:(id)arg1;
- (void)validateAccount:(id)arg1 password:(id)arg2;
- (id)tokenForCurrentAccount;
- (BOOL)readyToRequestToken;
- (BOOL)loadStoredCredentials;
- (BOOL)cachedCredentialsValid;
- (void)dealloc;
- (id)init;

@end

