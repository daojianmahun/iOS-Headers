/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PFUbiquityStoreSaveSnapshot : NSObject
{
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_localPeerID;
    NSDictionary *_storeOptions;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
}

- (id)init;
- (id)initWithLocalPeerID:(id)arg1;
- (id)initWithPersistentStoreOptions:(id)arg1 andLocalPeerID:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)filesInsertedInTransaction;
- (id)filesDeletedInTransaction;
- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id *)arg4;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)generatePeerStatesWithStoreExportContext:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreWithName:(id)arg4;
- (void)setInsertedObjects:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)setDeletedObjects:(id)arg1;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID; // @synthesize globalObjectIDToPermanentManagedObjectID=_globalObjectIDToPermanentManagedObjectID;
@property(readonly, nonatomic) NSDictionary *globalObjectIDToIndex; // @synthesize globalObjectIDToIndex=_globalObjectIDToIndex;
@property(readonly, nonatomic) NSDictionary *primaryKeyToIndex; // @synthesize primaryKeyToIndex=_primaryKeyToIndex;
@property(readonly, nonatomic) NSDictionary *peerIDToIndex; // @synthesize peerIDToIndex=_peerIDToIndex;
@property(readonly, nonatomic) NSDictionary *entityNameToIndex; // @synthesize entityNameToIndex=_entityNameToIndex;
@property(readonly, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID; // @synthesize managedObjectIDToGlobalObjectID=_managedObjectIDToGlobalObjectID;
@property(readonly, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(retain, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(readonly, nonatomic) NSDictionary *peerStates; // @synthesize peerStates=_peerStates;
@property(readonly, nonatomic) NSDictionary *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
@property(readonly, nonatomic) NSDictionary *updatedObjects; // @synthesize updatedObjects=_updatedObjects;
@property(readonly, nonatomic) NSDictionary *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property(readonly, nonatomic) NSArray *primaryKeys; // @synthesize primaryKeys=_primaryKeys;
@property(readonly, nonatomic) NSArray *globalObjectIDs; // @synthesize globalObjectIDs=_globalObjectIDs;
@property(readonly, nonatomic) NSArray *peerIDs; // @synthesize peerIDs=_peerIDs;
@property(readonly, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;

@end

