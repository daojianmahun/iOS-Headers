//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTNumberCell : GQDTCell
{
    double mValue;
    GQDTComputedFormatSpec *mComputedFormat;
}

- (int)readAttributesForNCell:(struct _xmlTextReader *)arg1;
- (int)readAttributesForNumberCell:(struct _xmlTextReader *)arg1;
- (struct __CFString *)createStringValue;
- (double)value;
- (void)dealloc;

@end

