//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy
{
    id target;
    id exception;
}

- (void)handleException:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

