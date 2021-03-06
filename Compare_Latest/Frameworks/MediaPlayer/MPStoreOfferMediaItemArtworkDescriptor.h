//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject
{
    long long _itemPersistentID;
    NSDictionary *_screenshotURLs;
    NSDictionary *_itemArtworkURLs;
    NSDictionary *_containerArtworkURLs;
    NSArray *_screenshotSizes;
    NSArray *_itemArtworkSizes;
    NSArray *_containerArtworkSizes;
    unsigned int _hash;
    NSString *_cacheID;
}

@property(readonly, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;
- (void).cxx_destruct;
- (id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1;
- (id)_availableSizesForArtworkURLs:(id)arg1;
- (id)_preferredArtworkURLsForType:(int)arg1;
- (id)availableSizesForArtworkOfType:(int)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1 type:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;

@end

