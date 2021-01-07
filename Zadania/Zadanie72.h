//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_ZADANIE72_H
#define LAB_7_ZADANIE72_H

#include "Zadanie71.h"
#include <iostream>
#include <vector>


class invert_smol_tab : protected smol_tab{
public:
    invert_smol_tab();

private:
    void invert_tab();
    void print_invert();
};

#endif //LAB_7_ZADANIE72_H
