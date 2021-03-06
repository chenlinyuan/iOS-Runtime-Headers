/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTUserNotificationList : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (id)clientQueue;
- (id)connection;
- (id)initWithQueue:(id)arg1;
- (void)isNotificationImminentWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)setClientQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
