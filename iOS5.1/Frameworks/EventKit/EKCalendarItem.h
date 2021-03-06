/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

@class EKCalendar, NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItem : EKObject
{
}

- (void)moveToCalendar:(id)arg1;
- (id)originalItem;
- (void)_moveToCalendarInternal:(id)arg1;
- (void)rebase;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentObject;
- (BOOL)validate:(id *)arg1;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id *)arg3;
- (id)attachments;
- (id)_attachmentsRelation;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (id)_organizerRelation;
- (id)selfAttendee;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
@property(readonly, nonatomic) NSArray *attendees;
@property(readonly, nonatomic) BOOL hasAttendees;
- (id)_selfAttendeeRelation;
- (id)_attendeesRelation;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
@property(copy, nonatomic) NSArray *recurrenceRules;
@property(readonly, nonatomic) BOOL hasRecurrenceRules;
- (id)_recurrencesRelation;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *alarms;
@property(readonly, nonatomic) BOOL hasAlarms;
- (id)_alarmsRelation;
- (BOOL)allowsAttendeeModifications;
- (BOOL)allowsAlarmModifications;
- (BOOL)allowsRecurrenceModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)isExternallyOrganizedInvitation;
- (BOOL)isSelfOrganizedInvitation;
- (BOOL)isSelfOrganized;
- (BOOL)isFloating;
- (BOOL)isEditable;
- (BOOL)requiresDetach;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) EKCalendar *calendar;
@property(copy, nonatomic) NSURL *URL;
- (void)setAction:(id)arg1;
- (id)action;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)isAllDay;
@property(readonly, nonatomic) NSDate *creationDate;
- (void)setLastModifiedDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
- (id)structuredLocation;
- (void)setStructuredLocation:(id)arg1;
@property(copy, nonatomic) NSString *location;
- (id)_locationRelation;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL hasNotes;
@property(copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *UUID;
- (id)_persistentItem;
- (id)description;
- (id)lazyLoadRelationForKey:(id)arg1;

@end

