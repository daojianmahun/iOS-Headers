//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPropertyEditingTableViewCellDelegate.h"

@class NSString;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate>
{
    id <ABSimpleTextInputViewControllerDelegate> _delegate;
    id _value;
    NSString *_placeholder;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_value;
@property(nonatomic) id <ABSimpleTextInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)updateSaveButton;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (float)ab_heightToFitForViewInPopoverView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (void)setTitleLocalizationKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

