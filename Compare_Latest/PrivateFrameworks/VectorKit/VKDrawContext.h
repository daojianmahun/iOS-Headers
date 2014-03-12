/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLContext.h>

@class VGLRoadAtlas, VGLTexture, VKCamera, VKViewTransform;

// Not exported
@interface VKDrawContext : VGLContext
{
    int _frameNumber;
    double _timestamp;
    id <VGLCanvas> _canvas;
    VKCamera *_camera;
    VKViewTransform *_viewTransform;
    CDStruct_aa5aacbc _modelMatrix;
    CDStruct_aa5aacbc _modelViewProjectionMatrix;
    CDUnion_f5b85e25 _shaderMatrix;
    Vec3Imp_f658403c _light;
    _Bool _cullFaceEnabled;
    unsigned long long _mapLayerPosition;
    VGLTexture *_alphaTexture;
    VGLTexture *_arrowTexture;
    VGLRoadAtlas *_alphaAtlas;
    VGLTexture *_mediumTrafficTexture;
    VGLTexture *_slowTrafficTexture;
    VGLTexture *_borderTexture;
    _Bool _gesturing;
    _Bool _hasOccluders;
    _Bool _hasMovingOccluders;
    double _styleZ;
    struct VKEdgeInsets _labelEdgeInsets;
    unsigned char _stencilStart;
}

@property(nonatomic) struct VKEdgeInsets labelEdgeInsets; // @synthesize labelEdgeInsets=_labelEdgeInsets;
@property(nonatomic) _Bool hasMovingOccluders; // @synthesize hasMovingOccluders=_hasMovingOccluders;
@property(nonatomic) _Bool hasOccluders; // @synthesize hasOccluders=_hasOccluders;
@property(readonly, nonatomic) double styleZ; // @synthesize styleZ=_styleZ;
@property(nonatomic, getter=isGesturing) _Bool gesturing; // @synthesize gesturing=_gesturing;
@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;
@property(nonatomic) Vec3Imp_f658403c light; // @synthesize light=_light;
@property(readonly, nonatomic) CDUnion_f5b85e25 shaderMatrix; // @synthesize shaderMatrix=_shaderMatrix;
@property(retain, nonatomic) VKViewTransform *viewTransform; // @synthesize viewTransform=_viewTransform;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) id <VGLCanvas> canvas; // @synthesize canvas=_canvas;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int frameNumber; // @synthesize frameNumber=_frameNumber;
- (id).cxx_construct;
- (void)markStencilAsDirty;
- (unsigned char)reserveStencilValues:(unsigned char)arg1;
- (float)styleZAdjust;
- (void)startFrameWithCamera:(id)arg1;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *modelViewProjectionMatrix;
@property(nonatomic) const CDStruct_aa5aacbc *modelMatrix;
- (void)dealloc;
@property(readonly, nonatomic) VGLTexture *borderTexture;
@property(readonly, nonatomic) VGLTexture *arrowTexture; // @synthesize arrowTexture=_arrowTexture;
@property(readonly, nonatomic) VGLTexture *mediumTrafficTexture;
@property(readonly, nonatomic) VGLTexture *slowTrafficTexture;
@property(readonly, nonatomic) VGLTexture *alphaTexture; // @synthesize alphaTexture=_alphaTexture;
@property(readonly, nonatomic) VGLRoadAtlas *alphaAtlas; // @synthesize alphaAtlas=_alphaAtlas;

@end
