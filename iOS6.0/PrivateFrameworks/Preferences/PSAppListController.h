/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSListController.h>

@interface PSAppListController : PSListController
{
}

- (id)bundle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (id)_localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;

@end

