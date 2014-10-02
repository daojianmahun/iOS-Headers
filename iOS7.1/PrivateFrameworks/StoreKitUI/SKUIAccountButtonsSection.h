//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIAccountButtonsDelegate.h"

@class SKUIAccountButtonsComponent, SKUIAccountButtonsViewController;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate>
{
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

- (void).cxx_destruct;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (int)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent; // @dynamic pageComponent;

@end
