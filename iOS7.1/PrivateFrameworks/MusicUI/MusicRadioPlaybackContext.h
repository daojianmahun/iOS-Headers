//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicPlaybackContext.h>

@class MPAVItem, NSArray, RadioStation;

@interface MusicRadioPlaybackContext : MusicPlaybackContext
{
    MPAVItem *_prefixItem;
    RadioStation *_station;
    NSArray *_tracks;
}

+ (Class)queueFeederClass;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
@property(retain, nonatomic) MPAVItem *prefixItem; // @synthesize prefixItem=_prefixItem;
- (void).cxx_destruct;
- (BOOL)hasStreamingTrack;
- (id)initWithStation:(id)arg1;

@end

