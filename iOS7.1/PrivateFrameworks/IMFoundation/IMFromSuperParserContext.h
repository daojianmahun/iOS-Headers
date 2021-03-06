//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/IMAttributedStringParserContext.h>

@class NSArray, NSMutableArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext
{
    NSMutableArray *_inlinedFileTransferGUIDs;
    NSMutableArray *_standaloneFileTransferGUIDs;
}

@property(readonly, nonatomic) NSArray *standaloneFileTransferGUIDs; // @synthesize standaloneFileTransferGUIDs=_standaloneFileTransferGUIDs;
@property(readonly, nonatomic) NSArray *inlinedFileTransferGUIDs; // @synthesize inlinedFileTransferGUIDs=_inlinedFileTransferGUIDs;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)parserDidStart:(id)arg1;
- (id)resultsForLogging;
- (id)name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;

@end

