#pragma once

#include "Widget.h"
#include "Point.h"
#include <string>

namespace TDT4102 {
    class Button : public TDT4102::Widget {
    private:
        std::string label;
        bool lastRightMouseButtonState = false;
    protected:
        void update(nk_context* context) override;
    public:
        explicit Button(TDT4102::Point location, unsigned int width, unsigned int height, std::string label);
        void setLabel(std::string newlabel);
    };
}