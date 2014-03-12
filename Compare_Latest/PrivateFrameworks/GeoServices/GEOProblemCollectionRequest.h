/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface GEOProblemCollectionRequest : PBRequest <NSCopying>
{
    NSString *_countryCode;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSMutableArray *_requestElements;
}

@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;
@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInputLanguage;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasHwMachine;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestElementsCount;
- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;
- (void)dealloc;

@end
