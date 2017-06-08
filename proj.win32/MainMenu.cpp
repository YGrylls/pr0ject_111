//This is the main menu
#include "MainMenu.h"
#include"Balls.h"
#include<ui/CocosGUI.h>
USING_NS_CC;
using namespace ui;
using namespace cocos2d;
Scene* MainMenu::createScene()
{
	auto scene = Scene::create();
	auto layer_mainMenu = MainMenu::create();
	auto layer_mainBG = MainBG::create();
	scene->addChild(layer_mainMenu);
	scene->addChild(layer_mainBG);
	return scene;
}
bool MainMenu::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 originPos = Director::getInstance()->getVisibleOrigin();
	//this->_localZOrder = 2;
	CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("titlemusic.mp3");
	//the Start Button
	auto startGame_button = Button::create("StartMenu_startbutton.png");
	startGame_button->setPosition(Vec2(visibleSize.width / 2 + originPos.x, visibleSize.height / 2.7 + originPos.y));
	startGame_button->setScale(0.5);
	//here to put the onclick event
	this->addChild(startGame_button);
	auto startGame_button_mp = Button::create("StartMenu_startbutton_MP.png");
	startGame_button_mp->setPosition(Vec2(visibleSize.width / 2 + originPos.x, visibleSize.height / 2.7 - 120 + originPos.y));
	startGame_button_mp->setScale(0.5);
	//here to put the onclick event mp
	this->addChild(startGame_button_mp);
	//the title logo
	auto titleLogo = Balls::createWithFileName("StartMenu_titlelogo.png");
	titleLogo->setPosition(Vec2(visibleSize.width / 2 + originPos.x, visibleSize.height / 1.4 + originPos.y));
	titleLogo->setScale(0.7);
	this->addChild(titleLogo);
	CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("titlemusic.mp3", true);
	return true;
}

int num = 0;

bool MainBG::init()
{
	if (!Layer::init())
	{
		return false;
	}
	this->setLocalZOrder(-1);
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 originPos = Director::getInstance()->getVisibleOrigin();
	auto backGround = Sprite::create("StartMenu_BG.png");
	backGround->setPosition(Vec2(visibleSize.width / 2 + originPos.x, visibleSize.height / 2 + originPos.y));
	this->addChild(backGround);
	Balls* huaJi = Balls::createWithFileName("huaJi.png");
	huaJi->initStatus(10);
	huaJi->setPosition(Vec2(visibleSize.width / 2 + originPos.x, visibleSize.height / 2 + originPos.y));
	this->addChild(huaJi, 1, "HJ");
	//food
	
	while (num<300)
	{

		int xPos = CCRANDOM_0_1() * 2000 ;
		int yPos = CCRANDOM_0_1() * 2000 ;

		float food_colour;
		food_colour = CCRANDOM_0_1();
		if (food_colour < 0.17) {
			auto food = Balls::createWithFileName("food_r.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.34) {
			auto food = Balls::createWithFileName("food_y.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.5) {
			auto food = Balls::createWithFileName("food_b.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.67) {
			auto food = Balls::createWithFileName("food_g.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.84) {
			auto food = Balls::createWithFileName("food_p.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		else {
			auto food = Balls::createWithFileName("food_s.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			this->addChild(food);
			num += 1;
		}
		
	}
	while (num < 3000)
	{

		int xPos = CCRANDOM_0_1() * 2000;
		int yPos = CCRANDOM_0_1() * 2000;

		float food_colour;
		food_colour = CCRANDOM_0_1();
		if (food_colour < 0.17) {
			auto food = Balls::createWithFileName("food_r.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.34) {
			auto food = Balls::createWithFileName("food_y.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.5) {
			auto food = Balls::createWithFileName("food_b.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.67) {
			auto food = Balls::createWithFileName("food_g.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
		else if (food_colour < 0.84) {
			auto food = Balls::createWithFileName("food_p.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
		else {
			auto food = Balls::createWithFileName("food_s.png");
			food->setPosition(Vec2(xPos, yPos));
			food->initStatus(1);
			food->_isfood = true;
			food->setVisible(false);
			this->addChild(food);
			num += 1;
		}
	}
		num = 0;
	// test balls
	Balls*test1 = Balls::createWithFileName("test.png");
	test1->initStatus(3);
	test1->setPosition(Vec2(visibleSize.width / 2 + originPos.x + 300, visibleSize.height / 2 + originPos.y + 300));
	this->addChild(test1, 1);
	Balls*test2 = Balls::createWithFileName("test.png");
	test2->initStatus(1);
	test2->setPosition(Vec2(visibleSize.width / 2 + originPos.x - 300, visibleSize.height / 2 + originPos.y));
	this->addChild(test2, 1);
	Balls*test3 = Balls::createWithFileName("test.png");
	test3->initStatus(5);
	test3->setPosition(Vec2(visibleSize.width / 2 + originPos.x - 300, visibleSize.height / 2 + originPos.y + 300));
	this->addChild(test3, 1);
	Balls*test4 = Balls::createWithFileName("test.png");
	test4->initStatus(12);
	test4->setPosition(Vec2(visibleSize.width / 2 + originPos.x - 300, visibleSize.height / 2 + originPos.y - 300));
	this->addChild(test4, 1);
	//
	auto listener = EventListenerMouse::create();
	listener->onMouseMove = [=](Event* event)
	{
		EventMouse* _event = (EventMouse*)event;
		x = _event->getCursorX();
		y = _event->getCursorY();
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	this->schedule(schedule_selector(MainBG::update), 0.1f);
	return true;
}

void MainBG::update(float dt)
{
	this->getChildByName("HJ")->stopAllActions();
	auto moveTo = MoveTo::create(0.8, Vec2(x, y));
	this->getChildByName("HJ")->runAction(moveTo);
	Balls* _yourball = dynamic_cast<Balls*>(this->getChildByName("HJ"));
	_yourball->swallow(this);
	_yourball->updateRadius();
	num += 1;
	if (num >= 30) {
		cocos2d::Vector<Node*> _allballs;
		_allballs = this->getChildren();
		for (auto _target : _allballs) {
			if (!_target->isVisible()) {
				Balls* _target_b = dynamic_cast<Balls*>(_target);
				if (_target_b != nullptr&&_target_b->_isfood) {
					float whether_set = CCRANDOM_0_1();
					if (whether_set<0.1)_target_b->setVisible(true);
				}
			}
		}
		num = 0;
	}
}
