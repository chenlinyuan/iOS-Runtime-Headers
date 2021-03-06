/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCXPCService : NSObject <CoreCECBusDelegate, CoreCECDeviceDelegate, CoreIRLearningSessionBridgeDelegate, CoreRCBusDelegate, CoreRCDeviceDelegate, CoreRCManagerDelegate, CoreRCXPCService, CoreRCXPCServiceCEC, CoreRCXPCServiceCECPrivate, CoreRCXPCServiceIR, CoreRCXPCServicePrivate, NSXPCListenerDelegate> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
    CoreRCManagerProvider * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CoreRCManagerProvider *manager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void)_addDeviceOnBusAsync:(id)arg1 withType:(unsigned int)arg2 matching:(id)arg3 reply:(id /* block */)arg4;
- (void)_addDeviceOnBusAsync:(id)arg1 withType:(unsigned int)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(id /* block */)arg5;
- (void)_changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 forDevice:(id)arg4 reply:(id /* block */)arg5;
- (void)_clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)_deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(id /* block */)arg3;
- (void)_endLearningWithDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)_fakeCreateCECBusAsync:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)_fakeCreateRemoteCECDeviceAsync:(unsigned int)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)_fakeRemoveCECBusAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)_fakeRemoveCECDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)_fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 physicalAddress:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)_fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(id /* block */)arg3;
- (void)_getExtendedPropertyAsyncForKey:(id)arg1 ofDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)_getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(id /* block */)arg3;
- (void)_performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned int)arg2 targetDevice:(id)arg3 hasEntitlement:(id)arg4 reply:(id /* block */)arg5;
- (void)_performDeckControlPlayAsync:(id)arg1 playMode:(unsigned int)arg2 targetDevice:(id)arg3 hasEntitlement:(id)arg4 reply:(id /* block */)arg5;
- (void)_performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned int)arg3 hasEntitlement:(id)arg4 reply:(id /* block */)arg5;
- (void)_performDeckControlSetDeckStatusAsync:(unsigned int)arg1 forDevice:(id)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_performInactiveSourceAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(id /* block */)arg3;
- (void)_performRefreshDevicesAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(id /* block */)arg3;
- (void)_performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 hasEntitlement:(id)arg4 reply:(id /* block */)arg5;
- (void)_performRequestActiveSourceAsync:(id)arg1 hasEntitlement:(id)arg2 reply:(id /* block */)arg3;
- (void)_performSetPowerStatus:(unsigned int)arg1 withDeviceAsync:(id)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_performStandbyAsync:(id)arg1 targetDevice:(id)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned int)arg2 hasEntitlement:(id)arg3 reply:(id /* block */)arg4;
- (void)_queryBusesAsync:(id /* block */)arg1;
- (void)_queryLocalInstanceAsync:(unsigned int)arg1 bus:(id)arg2 client:(id)arg3 reply:(id /* block */)arg4;
- (void)_sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)_sendCommandAsync:(unsigned int)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)_sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)_setCommandAsync:(unsigned int)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(id /* block */)arg6;
- (void)_setExtendedPropertyAsync:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)_setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)_setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(id /* block */)arg3;
- (void)_setPairStateAsync:(BOOL)arg1 forAppleRemote:(id)arg2 reply:(id /* block */)arg3;
- (void)_setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(id /* block */)arg4;
- (void)_setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(id /* block */)arg3;
- (void)_startLearningCommandAsync:(unsigned int)arg1 withDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)_startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(id /* block */)arg3;
- (void)_updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned int)arg2 matching:(id)arg3 reply:(id /* block */)arg4;
- (void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned int)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(id /* block */)arg5;
- (void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenUpdated:(id)arg2;
- (void)cecBus:(id)arg1 activeSourceHasChangedTo:(id)arg2 fromDevice:(id)arg3;
- (void)cecBus:(id)arg1 linkStateHasBeenUpdated:(BOOL)arg2;
- (void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2;
- (void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned int)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 featureAbort:(id)arg2;
- (void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;
- (void)cecDeviceShouldAssertActiveSource:(id)arg1;
- (void)changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 forDevice:(id)arg4 reply:(id /* block */)arg5;
- (void)clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)connectionInvalidated:(id)arg1;
- (id)connections;
- (void)dealloc;
- (void)deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(id /* block */)arg3;
- (void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3;
- (void)endLearningWithDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)fakeCreateCECBusAsync:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)fakeCreateRemoteCECDeviceAsync:(unsigned int)arg1 bus:(id)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)fakeRemoveCECBusAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)fakeRemoveCECDeviceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)fakeSetCECBusLinkStateAsync:(id)arg1 linkState:(BOOL)arg2 physicalAddress:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)fakeSetCECDeviceLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(id /* block */)arg3;
- (void)getExtendedPropertyAsyncForKey:(id)arg1 ofDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (void)learningSessionForDevice:(id)arg1 commandProgress:(id)arg2;
- (void)learningSessionForDevice:(id)arg1 duplicateCommand:(unsigned int)arg2 target:(id)arg3;
- (void)learningSessionForDevice:(id)arg1 status:(unsigned int)arg2;
- (void)learningSessionForDeviceCommandDone:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)manager;
- (void)manager:(id)arg1 hasAdded:(id)arg2;
- (void)manager:(id)arg1 hasRemoved:(id)arg2;
- (void)manager:(id)arg1 hasUpdated:(id)arg2;
- (void)performActiveSourceAsync:(id)arg1 withMenus:(BOOL)arg2 reply:(id /* block */)arg3;
- (void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned int)arg2 targetDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned int)arg2 targetDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)performDeckControlSetDeckStatusAsync:(unsigned int)arg1 forDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)performInactiveSourceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)performRefreshDevicesAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(id /* block */)arg4;
- (void)performRequestActiveSourceAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)performSetPowerStatus:(unsigned int)arg1 withDeviceAsync:(id)arg2 reply:(id /* block */)arg3;
- (void)performSetSystemAudioControlEnabled:(BOOL)arg1 withDeviceAsync:(id)arg2 reply:(id /* block */)arg3;
- (void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)queryBusesAsync:(id /* block */)arg1;
- (void)queryLocalInstanceAsync:(unsigned int)arg1 bus:(id)arg2 reply:(id /* block */)arg3;
- (void)queryLoggingAsync:(id /* block */)arg1;
- (id)queue;
- (void)sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)sendCommandAsync:(unsigned int)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 withDuration:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)setCommandAsync:(unsigned int)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(id /* block */)arg6;
- (void)setExtendedPropertyAsync:(id)arg1 forKey:(id)arg2 ofDevice:(id)arg3 reply:(id /* block */)arg4;
- (void)setLoggingAsync:(id)arg1 reply:(id /* block */)arg2;
- (void)setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(id /* block */)arg3;
- (void)setPairStateAsync:(BOOL)arg1 forAppleRemote:(id)arg2 reply:(id /* block */)arg3;
- (void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(id /* block */)arg4;
- (void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(id /* block */)arg3;
- (void)startLearningCommandAsync:(unsigned int)arg1 withDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(id /* block */)arg3;
- (void)startOnQueue:(id)arg1;
- (void)updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(id /* block */)arg3;
- (void)validateAndCallBlock:(id /* block */)arg1;

@end
