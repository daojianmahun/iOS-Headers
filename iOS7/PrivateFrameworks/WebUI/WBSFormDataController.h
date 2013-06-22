/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface WBSFormDataController : NSObject
{
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    unsigned int _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsername;
}

+ (id)domainFromURL:(id)arg1;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned int)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)specifierForControl:(id)arg1;
+ (BOOL)formContainsCreditCardNumberField:(id)arg1;
+ (BOOL)formContainsCreditCardData:(id)arg1;
+ (BOOL)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)valueOfControlWithName:(id)arg1 inForm:(id)arg2;
+ (BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned int *)arg2;
+ (id)dontSaveMarker;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(BOOL)arg3;
- (void)addCredentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (id)completionDBPath;
- (BOOL)shouldAutoFillFromCreditCardData;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)shouldSaveCreditCardData;
- (BOOL)shouldSaveUsernamesAndPasswords;
- (BOOL)shouldSaveFormData;
- (id)lastUsedUsernameForURL:(id)arg1;
- (void)setLastUsedUsername:(id)arg1 forDomain:(id)arg2;
- (id)lastUsedUsernameForDomain:(id)arg1;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id *)arg4;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (unsigned int)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned int)arg2 fieldName:(id)arg3 fromAutoFillItem:(id)arg4 toDictionary:(id)arg5;
- (id)bestMatchForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (id)preferredIdentifierForProperty:(id)arg1;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (void)domainsWithPreviousDataChanged;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)domainsWithPreviousData;
- (void)saveCompletionDBSoon;
- (id)allFormDataForSaving;
- (void)pruneCompletionDB;
- (void)loadCompletionDBIfNeeded;
- (void)dealloc;

@end
