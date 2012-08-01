//
//  GameOverScene.h
//  HelloWorld-cocos2d
//
//  Created by 高思 on 12-7-31.
//  Copyright (c) 2012年 RenRen.com. All rights reserved.
//

#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor {
    CCLabelTTF *_label;
}
@property (nonatomic, retain) CCLabelTTF *label;
@end

@interface GameOverScene : CCScene {
    GameOverLayer *_layer;
}
@property (nonatomic, retain) GameOverLayer *layer;
@end
