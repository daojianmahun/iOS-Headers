//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "_UIViewServiceDeputy_UIViewServiceInterface.h"

@class _UIAsyncInvocationObserver;

@protocol _UIViewServiceDeputy <NSObject, _UIViewServiceDeputy_UIViewServiceInterface>
+ (id <_UIViewServiceDeputyXPCInterface>)XPCInterface;
- (_UIAsyncInvocationObserver *)invalidate;
@end

