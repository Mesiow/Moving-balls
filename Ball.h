#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include <SFML/Graphics.hpp>
class Ball
{
public:
    Ball(float xpos, float ypos);
    sf::FloatRect getPosition();
    sf::RectangleShape getShape();

    void reboundsides();
    void reboundBottom();
    void reboundTop();
    float getXvelocity();
    void update();

private:
    sf::Vector2f mPosition;
    sf::RectangleShape mBallShape;

private:
    float xVelocity=.1f;
    float yVelocity=.1f;
};


#endif // BALL_H_INCLUDED
