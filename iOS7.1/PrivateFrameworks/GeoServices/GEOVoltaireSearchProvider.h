//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOSearchProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    CDUnknownBlockType _finished;
    CDUnknownBlockType _spellingSuggestion;
    CDUnknownBlockType _refinement;
    BOOL _cancelled;
}

+ (id)_searchURLForRequest:(id)arg1;
+ (unsigned short)provider;
+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (int)defaultLocalSearchProviderID;
+ (int)localSearchProviderID;
+ (id)searchProviderURL;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)cancel;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(CDUnknownBlockType)arg4 spellingSuggestion:(CDUnknownBlockType)arg5 refinement:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7 isCompletions:(BOOL)arg8;
- (void)dealloc;

@end
