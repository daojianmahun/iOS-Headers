//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSPredicate;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject
{
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    BOOL _finished;
    CDUnknownBlockType _callback;
    unsigned int _previous;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)run;
- (void)terminate;
- (BOOL)_receivedData:(CDStruct_6a127a3b [50])arg1 count:(int)arg2;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

