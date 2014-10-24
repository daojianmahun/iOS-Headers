//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPStoreAVItem.h>

@class NSCache;

@interface MPMediaQueryNowPlayingItem : MPStoreAVItem
{
    NSCache *_cache;
}

+ (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 forQueuedItems:(id)arg2 currentQuery:(id)arg3;
- (void).cxx_destruct;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2;
- (id)_newTimeMarkersForChapterType:(int)arg1;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_applyLoudnessInfo;
- (float)userRating;
- (BOOL)useEmbeddedChapterData;
- (id)urlTimeMarkers;
- (unsigned int)type;
- (id)titlesForTime:(double)arg1;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (long long)storeID;
- (void)setRating:(float)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)reevaluateType;
- (double)playbackCheckpointCurrentTime;
- (unsigned long long)persistentID;
- (void)notePlaybackFinishedByHittingEnd;
- (id)mainTitle;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (id)genre;
- (BOOL)allowsEQ;
- (int)customAVEQPreset;
- (BOOL)isStreamable;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (BOOL)isCloudItem;
- (BOOL)isExplicitTrack;
- (double)durationFromExternalMetadata;
- (id)displayableText;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)copyrightText;
- (id)composer;
- (id)chapterTimeMarkers;
- (BOOL)canSeedGenius;
- (id)artworkTimeMarkers;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (id)albumArtist;
- (id)artist;
- (id)album;
- (id)description;
- (id)initWithMediaItem:(id)arg1 allowCloudDialogue:(BOOL)arg2;

@end
