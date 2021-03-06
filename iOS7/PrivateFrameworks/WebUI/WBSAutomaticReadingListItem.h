/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL, UIImage, WBSAutomaticReadingListSocialSource;

@interface WBSAutomaticReadingListItem : NSObject
{
    _Bool _repostedByAuthenticatedUser;
    _Bool _fetchingProfileImage;
    NSString *_uniqueIdentifier;
    id _sourceRecordID;
    NSDate *_sourceRecordCreationDate;
    NSString *_sourceRecordText;
    id _originatorID;
    NSString *_originatorDisplayName;
    NSString *_urlString;
    NSString *_reposterDisplayName;
    NSString *_reposterScreenName;
    UIImage *_originatorProfileImage;
    NSString *_socialSourceAccountIdentifier;
}

+ (id)keyPathsForValuesAffectingDomainString;
@property(nonatomic) _Bool fetchingProfileImage; // @synthesize fetchingProfileImage=_fetchingProfileImage;
@property(readonly, nonatomic) NSString *socialSourceAccountIdentifier; // @synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier;
@property(nonatomic, getter=isRepostedByAuthenticatedUser) _Bool repostedByAuthenticatedUser; // @synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser;
@property(retain, nonatomic) UIImage *originatorProfileImage; // @synthesize originatorProfileImage=_originatorProfileImage;
@property(readonly, nonatomic) NSString *reposterScreenName; // @synthesize reposterScreenName=_reposterScreenName;
@property(readonly, nonatomic) NSString *reposterDisplayName; // @synthesize reposterDisplayName=_reposterDisplayName;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *originatorDisplayName; // @synthesize originatorDisplayName=_originatorDisplayName;
@property(readonly, nonatomic) id originatorID; // @synthesize originatorID=_originatorID;
@property(readonly, nonatomic) NSString *sourceRecordText; // @synthesize sourceRecordText=_sourceRecordText;
@property(readonly, nonatomic) NSDate *sourceRecordCreationDate; // @synthesize sourceRecordCreationDate=_sourceRecordCreationDate;
@property(readonly, nonatomic) id sourceRecordID; // @synthesize sourceRecordID=_sourceRecordID;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;
- (void)_fetchOriginatorProfileImageForSize:(struct CGSize)arg1;
- (id)bestOriginatorProfileImageForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSURL *biggerOriginatorProfileImageURL;
@property(readonly, nonatomic) NSURL *originatorProfileImageURL;
@property(readonly, nonatomic) struct _NSRange displayURLRange;
@property(readonly, nonatomic) NSString *displayString;
@property(readonly, nonatomic) NSURL *originatorProfileURL;
@property(readonly, nonatomic) NSURL *sourceRecordURL;
@property(readonly, nonatomic) NSString *domainString;
@property(readonly, nonatomic) WBSAutomaticReadingListSocialSource *socialSource;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

