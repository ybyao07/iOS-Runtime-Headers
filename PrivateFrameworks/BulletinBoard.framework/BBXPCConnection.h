/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBXPCConnectionDelegate>, <XPCProxyTarget>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, Protocol;

@interface BBXPCConnection : NSObject {
    <BBXPCConnectionDelegate> *_delegate;
    BOOL _established;
    BOOL _invalidated;
    Protocol *_protocol;
    NSObject<OS_dispatch_queue> *_queue;
    id _remoteProxy;
    <XPCProxyTarget> *_target;
}

@property(readonly) NSObject<OS_xpc_object> * connection;
@property <BBXPCConnectionDelegate> * delegate;
@property(readonly) id proxy;

- (void)_invalidateConnection;
- (void)_noteConnectionStateDidChange:(BOOL)arg1;
- (id)_queue;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)established;
- (id)init;
- (id)initWithQueue:(id)arg1 target:(id)arg2 remoteProtocol:(id)arg3;
- (void)invalidate;
- (BOOL)isValid;
- (id)proxy;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end