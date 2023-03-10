#include "Emoji.h"


Face::Face(Point p, int r): centre{p}, radius{r} {};

void Face::draw(AnimationWindow& win)
{
    win.draw_circle(centre,radius,Color::yellow);
};