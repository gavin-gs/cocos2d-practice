//
//  HelloWorldLayer.h
//  HelloWorld-cocos2d
//
//  Created by 高 思 on 12-7-31.
//  Copyright RenRen.com 2012年. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayerColor <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    NSMutableArray *_targets;
    NSMutableArray *_projectiles;
    
    int _projectilesDestroyed;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
