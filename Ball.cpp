#include "Ball.h"

Ball::Ball(float xpos, float ypos)
{
    mPosition.x=xpos;
    mPosition.y=ypos;

    mBallShape.setSize(sf::Vector2f(10,10)); ///set size of ball
    mBallShape.setFillColor(sf::Color::White); ///make balls white
    mBallShape.setPosition(mPosition); ///set passed in position
}

sf::FloatRect Ball::getPosition()
{
    return mBallShape.getGlobalBounds(); ///get position of ball
}

sf::RectangleShape Ball::getShape()
{
    return mBallShape; ///return copy of shape
}

float Ball::getXvelocity()
{
    return xVelocity;
}

void Ball::reboundsides()
{
    xVelocity= -xVelocity; ///set velocity to negative to reverse direction
}

void Ball::reboundBottom()
{
  yVelocity= -yVelocity;

}

void Ball::reboundTop()
{
    yVelocity= -yVelocity;
}

void Ball::update()
{
    mPosition.x+=xVelocity;
    mPosition.y+=yVelocity;

    mBallShape.setPosition(mPosition);
}
