//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SuggestedAppsController : NSObject
{
    NSArray *_specifiers;
}

- (void)setAppStore:(id)arg1 specifier:(id)arg2;
- (id)appStore:(id)arg1;
- (void)setMyApps:(id)arg1 specifier:(id)arg2;
- (id)myApps:(id)arg1;
- (void)reloadSpecifiers;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;

@end
