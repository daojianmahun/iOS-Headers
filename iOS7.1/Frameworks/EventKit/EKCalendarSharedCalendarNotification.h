//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification
{
    int _sharingInvitationResponse;
}

@property(nonatomic) int sharingInvitationResponse; // @synthesize sharingInvitationResponse=_sharingInvitationResponse;
- (BOOL)needsAlert;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(int)arg1;

@end

