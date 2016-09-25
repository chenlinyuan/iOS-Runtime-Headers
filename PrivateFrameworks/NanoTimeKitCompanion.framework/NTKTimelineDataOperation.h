/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineDataOperation : NSObject {
    BOOL  _canceled;
    NTKComplicationDataSource * _localDataSource;
    CLKComplication * _remoteComplication;
    <CLKComplicationDataSource> * _remoteDataSource;
    BOOL  _started;
}

@property (nonatomic, readonly) BOOL canceled;
@property (nonatomic, readonly) BOOL started;

+ (id)operationWithLocalDataSource:(id)arg1;
+ (id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (id)_finalizedValidEntries:(id)arg1;
- (void)_start;
- (BOOL)_validateEntry:(id)arg1;
- (void)cancel;
- (BOOL)canceled;
- (void)start;
- (BOOL)started;

@end