/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMMediaList, DOMNode, NSString;

@interface DOMStyleSheet : DOMObject
{
}

- (void)dealloc;
- (void)finalize;
@property(readonly, copy) NSString *type;
@property BOOL disabled;
@property(readonly, retain) DOMNode *ownerNode;
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;
@property(readonly, copy) NSString *href;
@property(readonly, copy) NSString *title;
@property(readonly, retain) DOMMediaList *media;

@end

