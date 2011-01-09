/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKLeaderboardViewControllerDelegate>;



@interface GKLeaderboardViewController : UINavigationController 
{
    <GKLeaderboardViewControllerDelegate> *_leaderboardDelegate;
}


- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)dismissPressed:(id)arg1;
- (id)initWithGame:(id)arg1 timeScope:(NSInteger)arg2 playerScope:(NSInteger)arg3;
- (id)initWithTimeScope:(NSInteger)arg1 playerScope:(NSInteger)arg2;

@end