#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(AIMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto label = CCLabelBMFont::create("AI", "bigFont.fnt");
        auto spr = CircleButtonSprite::create(label);
        auto btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(AIMenuLayer::onOpenAI));

        auto menu = CCMenu::create();
        menu->setPosition({60.f, 60.f});
        menu->addChild(btn);
        this->addChild(menu);
        return true;
    }

    void onOpenAI(CCObject*) {
        FLAlertLayer::create("GD AI Chat", "Hello from hammadus! The AI chat will come here.", "OK")->show();
    }
};
