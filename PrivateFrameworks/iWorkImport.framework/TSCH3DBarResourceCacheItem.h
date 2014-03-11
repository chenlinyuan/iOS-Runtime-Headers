/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DBarExtrusionGeometry, TSCH3DBarNormalResource, TSCH3DBarTexCoordResource, TSCH3DBarVertexResource;

@interface TSCH3DBarResourceCacheItem : NSObject {
    TSCH3DBarExtrusionGeometry *mBarGeometry;
    TSCH3DBarNormalResource *mNormalResource;
    TSCH3DBarTexCoordResource *mTexCoordResource;
    TSCH3DBarVertexResource *mVertexResource;
}

@property(readonly) TSCH3DBarNormalResource * normalResource;
@property(readonly) TSCH3DBarTexCoordResource * texCoordResource;
@property(readonly) TSCH3DBarVertexResource * vertexResource;

+ (id)itemWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;

- (void)dealloc;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
- (id)normalResource;
- (id)texCoordResource;
- (id)vertexResource;

@end