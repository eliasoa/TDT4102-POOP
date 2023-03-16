#pragma once
#include <iostream>
#include <utility>
class Dummy {
public:
    int *num;
    Dummy() {
        num = new int{0};
    }

    Dummy(const Dummy &old_dummy);

    Dummy operator=(Dummy rhs); 

    ~Dummy() {
        delete num;
    }
};
void dummyTest();