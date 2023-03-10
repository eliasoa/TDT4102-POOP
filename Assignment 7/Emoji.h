#pragma once
#include "std_lib_facilities.h"
#include "AnimationWindow.h"

// Abstrakt klasse. Arvende konkrete klasser må implementere funksjonen draw()
// som tegner former i vinduet de skal bli vist i.
class Emoji
{
public:
    virtual void draw(AnimationWindow&) = 0;
    virtual ~Emoji(){}; //destruktør
};

class Face : public Emoji
{
protected:
    Point centre;
    int radius;
public:
    /// @brief Constructor
    /// @param p Point
    /// @param r int
    Face(Point p, int r);

    /// @brief 
    /// @param  
    virtual void draw(AnimationWindow& win)override = 0;
};

