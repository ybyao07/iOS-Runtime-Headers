/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiagnosticManager : NSObject {
    int _lock;
    NSHashTable *_objects;
}

+ (id)sharedDiagnosticManager;

- (void).cxx_destruct;
- (id)_diagnosticsForKeys:(id)arg1 shouldLog:(BOOL)arg2;
- (id)_diagnosticsOverview;
- (void)addObject:(id)arg1;
- (id)diagnosticsForKeys:(id)arg1;
- (id)init;
- (void)logAllDiagnostics;
- (void)removeObject:(id)arg1;

@end
