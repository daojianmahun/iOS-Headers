//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextCommand.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSWPSetParagraphLevelCommand : TSWPTextCommand
{
    unsigned int _level;
    NSArray *_paragraphDeltas;
}

- (int)persistenceKind;
- (void)doCommit;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 level:(unsigned int)arg3;

@end
