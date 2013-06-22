/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class GKAchievementDescriptionInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding>
{
    GKAchievementDescriptionInternal *_internal;
    UIImage *_image;
}

+ (id)placeholderCompletedAchievementImage;
+ (id)incompleteAchievementImage;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadAchievementDescriptionWithIdentifier:(id)arg1 forGame:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) GKAchievementDescriptionInternal *internal; // @synthesize internal=_internal;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *imageURL;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *achievedDescription; // @dynamic achievedDescription;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden; // @dynamic hidden;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) int maximumPoints; // @dynamic maximumPoints;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end
