/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableSection.h>

@class NSDictionary, NSMutableDictionary;

@interface GKFriendPickerListSection : GKTableSection
{
    NSDictionary *_ranks;
    NSMutableDictionary *_cellStatusDict;
    int _maxPlayers;
    int _numSelected;
    unsigned int _scope;
    unsigned int _headerTitle;
    float _topMargin;
}

@property(nonatomic) float topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) unsigned int headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) unsigned int scope; // @synthesize scope=_scope;
@property(nonatomic) int numSelected; // @synthesize numSelected=_numSelected;
@property(nonatomic) int maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(retain, nonatomic) NSMutableDictionary *cellStatusDict; // @synthesize cellStatusDict=_cellStatusDict;
@property(retain, nonatomic) NSDictionary *ranks; // @synthesize ranks=_ranks;
- (id)titleForHeaderInTableView:(id)arg1;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (int)columnCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)filterWithSearchText:(id)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 loadAdditionalDataForItems:(id)arg2 thenUpdateView:(id)arg3;
- (void)dealloc;
- (id)init;

@end
