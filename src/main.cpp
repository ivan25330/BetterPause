#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class $modify(BetterPauseLayer, PauseLayer) {
    void customSetup() {
        // Мы вызываем оригинальный метод, чтобы пауза работала
        PauseLayer::customSetup();

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        // Пример улучшения: немного сдвигаем центральное меню паузы
        if (auto logo = this->getChildByID("center-menu")) {
            logo->setPositionY(logo->getPositionY() + 15.f);
        }

        // Пример: Добавляем новый красивый текст Better Pause вместо стандартного
        auto label = CCLabelBMFont::create("Better Pause Enabled!", "goldFont.fnt");
        label->setPosition({winSize.width / 2, winSize.height - 30});
        label->setScale(0.7f);
        label->setID("better-pause-title"_spr);
        
        // Добавляем новый текст на наш слой паузы
        this->addChild(label);
        
        // Здесь вы можете продолжить разработку:
        // добавлять новые кнопки (CCMenuItemSpriteExtra) 
        // или изменять существующие узлы, обращаясь к ним через getChildByID()
    }
};
