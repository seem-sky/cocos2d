#ifndef __GAME_RESULT_SCENE__
#define __GAME_RESULT_SCENE__

#include "cocos2d.h"
USING_NS_CC;

class GameResultScene : public cocos2d::Scene{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(GameResultScene);
};

#endif
