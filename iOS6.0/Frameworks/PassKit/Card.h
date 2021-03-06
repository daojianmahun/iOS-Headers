/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SQLiteEntity.h"

@interface Card : SQLiteEntity
{
}

+ (id)_serialNumberPredicate:(id)arg1;
+ (id)_uniqueIDPredicate:(id)arg1;
+ (id)cardTypePredicate:(id)arg1;
+ (id)webServicePredicate:(id)arg1;
+ (id)pushEnabledPredicate;
+ (id)queryWithDatabase:(id)arg1 cardType:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;
+ (id)anyInDatabase:(id)arg1 withCardType:(id)arg2 serialNumber:(id)arg3;
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withCardType:(id)arg2;
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(id)arg2;
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(id)arg2;
+ (void)enumerateSerialsAndTokensForQuery:(id)arg1 withHandler:(id)arg2;
+ (int)cardSettingsInDatabase:(id)arg1 withUniqueID:(id)arg2;
+ (id)cardOfClass:(Class)arg1 inDatabase:(id)arg2 withUniqueID:(id)arg3;
+ (id)cardsOfClass:(Class)arg1 inDatabase:(id)arg2 matchingPredicate:(id)arg3;
+ (id)_updateContextWithValues:(id *)arg1;
+ (id)_propertiesForUpdateContext;
+ (int)_cardSettingsWithValues:(id *)arg1;
+ (id)_propertiesForCardSettings;
+ (id)_cardOfClass:(Class)arg1 withValues:(id *)arg2 locations:(id)arg3;
+ (id)_propertiesForCard;
+ (id)insertCard:(id)arg1 withCardType:(id)arg2 webService:(id)arg3 inDatabase:(id)arg4;
+ (id)_dictionaryWithSettings:(int)arg1;
+ (id)_updateDictionaryWithCard:(id)arg1 webService:(id)arg2;
+ (id)_insertionDictionaryWithCard:(id)arg1 cardType:(id)arg2;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (BOOL)showsInLockScreen;
- (BOOL)isPushEnabled;
- (BOOL)deleteFromDatabase;
- (void)getPushRegistrationStatus:(int *)arg1 date:(id *)arg2;
- (id)authenticationToken;
- (id)serialNumber;
- (id)webService;
- (id)cardType;
- (id)updateContext;
- (int)cardSettings;
- (id)cardOfClass:(Class)arg1;
- (void)updateWithLastModifiedSource:(int)arg1;
- (void)updateWithLastModifiedTag:(id)arg1;
- (void)updateWithPushRegistrationStatus:(int)arg1 date:(id)arg2;
- (void)updateWithSettings:(int)arg1;
- (void)updateWithCard:(id)arg1 webService:(id)arg2;
- (id)initWithCard:(id)arg1 cardType:(id)arg2 webService:(id)arg3 inDatabase:(id)arg4;

@end

