//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DAFolderChangeConsumer.h"

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer>
{
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}

- (id)waitForResult;
- (void)folderChange:(id)arg1 finishedWithStatus:(int)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end

