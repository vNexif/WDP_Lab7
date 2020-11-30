//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_ZADANIE74_H
#define LAB_7_ZADANIE74_H

#include "Zadanie71.h"
#include "../Menu/menu.h"
#include <iostream>
#include <vector>

class sort_smol_tab : public smol_tab, public Menu{
public:
    sort_smol_tab();
    void options();

private:

    int smol_tab[30]{};
    int option{};

    void EasySort_ASC();

    void EasySort_DSC();

    void QuickSort_ASC();

    void QuickSort_DSC();

    static int Compare_ASC(const void *a, const void *b);

    static int Compare_DSC(const void *a, const void *b);

    void Vect_To_Tab();

    void fetch_option();

    void menu_logic();
};

#endif //LAB_7_ZADANIE74_H
