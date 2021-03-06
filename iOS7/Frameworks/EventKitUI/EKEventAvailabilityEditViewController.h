/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, UITableView;

// Not exported
@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    int _availability;
    unsigned long long _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

@property(nonatomic) int availability; // @synthesize availability=_availability;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(nonatomic) unsigned long long supportedAvailabilities;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

