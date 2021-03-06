#include "BasicState.hpp"
#include "../Application/StateManager.hpp"

std::string BasicState::getID()
{
    return "BasicState";
}

BasicState::BasicState(cf::StateManager& manager)
: State(manager)
{
    mTexture.loadFromFile("test/test.png");

    auto e = mEntities.createEntity();
    e->addComponent<SpriteComponent>(new SpriteComponent()).setTexture(mTexture);
    e->addComponent<MoveComponent>(new MoveComponent()).setSpeed(10.f);

    mEntities.addSystem(&mSpriteSystem);
    mEntities.addSystem(&mMoveSystem);
}

bool BasicState::handleEvent(sf::Event const& event)
{
    if (event.type == sf::Event::Closed)
    {
        cf::Application::getWindow().close();
    }
    return true;
}

bool BasicState::update(sf::Time dt)
{
    mMoveSystem.update(mClock.restart());
    return true;
}

void BasicState::render()
{
    mSpriteSystem.render(cf::Application::getWindow());
}
