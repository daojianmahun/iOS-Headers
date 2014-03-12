/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VMUHeader : NSObject
{
}

+ (id)headerWithUniverse:(id)arg1 memory:(id)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)headerWithMemory:(id)arg1 address:(unsigned long long)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
+ (id)extractMachOHeadersFromHeader:(id)arg1 matchingArchitecture:(id)arg2 considerArchives:(_Bool)arg3;
- (id)signature;
- (_Bool)isArchive;
- (_Bool)isMachO64;
- (_Bool)isMachO32;
- (_Bool)isMachO;
- (_Bool)isFat;

@end
