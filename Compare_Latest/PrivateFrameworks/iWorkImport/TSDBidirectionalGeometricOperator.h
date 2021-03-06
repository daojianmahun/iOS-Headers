//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSDBidirectionalGeometricOperator : NSObject
{
    NSMutableDictionary *mStandardValues;
    NSMutableDictionary *mSwappedValues;
}

- (id)valueForKey:(id)arg1 swapped:(BOOL)arg2;
- (void)executeBidirectionalOperation:(CDUnknownBlockType)arg1;
- (void)setOrientationDependentValueForKey:(id)arg1 withStandardValue:(id)arg2 andSwappedValue:(id)arg3;
- (void)dealloc;
- (id)init;

@end

