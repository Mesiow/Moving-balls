#include "App.h"


App::App()
:ball(100.0f,300.0f), b2(260.0f,150.0f), b3(290.0f,50 .0f) ///set ball x and y pos in constructor here
{
    mWindow.create(sf::VideoMode(WIDTH,HEIGHT),"Moving balls",sf::Style::Resize);
}

void App::run()
{
    while(mWindow.isOpen())
    {
        sf::Event ev;
        while(mWindow.pollEvent(ev))
        {
            if(ev.type==sf::Event::Closed)
            {
                mWindow.close();
            }

        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            mWindow.close();
        }

        mWindow.clear(sf::Color::Black);
        mWindow.draw(ball.getShape());
        mWindow.draw(b2.getShape());
        mWindow.draw(b3.getShape());

        update(ball);
        update(b2);
        update(b3);

        mWindow.display();
    }
}

void App::update(Ball &obj)
{
    ///check if ball hits top
    if(obj.getPosition().top < 0) ///if top of ball is less than 0 we hit the top
    {
        obj.reboundTop();
    }
    ///check if ball hits side
    if(obj.getPosition().left < 0 || obj.getPosition().left+10 > WIDTH)
    {
        obj.reboundsides();
    }
    ///check ball hitting bottom
    if(obj.getPosition().top > HEIGHT)///if top of ball is greater than height of the screen
    {
        obj.reboundBottom();
    }

    obj.update();

}
