/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKRequest;

@interface SBKSyncTransactionURLOperation : ISStoreURLOperation {
    SBKRequest *_SBKRequest;
    BOOL _shouldAuthenticate;
}

@property(retain) SBKRequest * SBKRequest;
@property BOOL shouldAuthenticate;

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)SBKRequest;
- (id)_init;
- (id)description;
- (id)init;
- (void)setSBKRequest:(id)arg1;
- (void)setShouldAuthenticate:(BOOL)arg1;
- (BOOL)shouldAuthenticate;

@end