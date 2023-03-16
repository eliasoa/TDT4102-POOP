#include "widgets/Button.h"
#include <utility>
#include <iostream>

TDT4102::Button::Button(TDT4102::Point location, unsigned int width, unsigned int height, std::string label) :
    TDT4102::Widget(location, width, height),
    label{std::move(label)} {}

void TDT4102::Button::update(nk_context *context) {
    bool rightMouseIsDown = nk_widget_has_mouse_click_down(context, NK_BUTTON_RIGHT, true);
    bool rightMouseIsBeingPressed = rightMouseIsDown && !lastRightMouseButtonState;
    lastRightMouseButtonState = rightMouseIsDown;
    
    if (nk_button_label(context, label.c_str()) || rightMouseIsBeingPressed) {
        fire();
    }
}

void TDT4102::Button::setLabel(std::string newlabel) {
    label = newlabel;
}
