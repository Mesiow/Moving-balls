#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Ball.h"
class App
{
public:
    App();
    void run();

private:
    void update(Ball &obj); ///reference to another ball object

private:
    sf::RenderWindow mWindow;
    Ball ball; ///3 ball objects
    Ball b2;
    Ball b3;

private:
    const int WIDTH=1024;
    const int HEIGHT=768;

};


#endif // APP_H_INCLUDED
