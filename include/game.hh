#ifndef GAME_HH
#define GAME_HH

#include <SFML/Graphics.hpp>

class Game
{
    public:
                                    Game();
        void                        run();

    private:
        void                        processEvents();
        void                        render();
        void                        handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
        void                        update(sf::Time deltaTime);
        void                        updateStatistics(sf::Time elapsedTime);

    private:
        sf::RenderWindow            mWindow;
        sf::Texture                 mTexture;
        sf::Sprite                  mPlayer;
        sf::Font                    mFont;
        sf::Text                    mStatisticsText;
        sf::Time                    mStatisticsUpdateTime;
        static const sf::Time       TimePerFrame;
        std::size_t                 mStatisticsNumFrames;

        static const float          PlayerSpeed;
        bool                        mIsMovingUp;
        bool                        mIsMovingDown;
        bool                        mIsMovingLeft;
        bool                        mIsMovingRight;
};

#endif
