//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CPDumpType.h>

@class CPDumpNumeric, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CPDumpUnion : CPDumpType
{
    NSString *mSelectorFieldName;
    CPDumpNumeric *mSelectorField;
    NSMutableDictionary *mSelectorToMemberMap;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (void)dealloc;
- (id)initWithSelectorField:(id)arg1 members:(id)arg2;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3;
- (id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4;

@end
