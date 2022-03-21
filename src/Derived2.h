//
// Created by Nuevo on 17/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H

#include "Base.h"

class Derived2 : public Base {
public:
    Derived2();

    virtual ~Derived2();

    void do_something() override;
};


#endif //LAB01_INHERITANCE_DERIVED2_H
