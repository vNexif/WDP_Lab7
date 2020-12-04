//
// Created by Nexif on 01/12/2020.
//

#ifndef LAB_7_ZADANIE77_H
#define LAB_7_ZADANIE77_H

#include <iostream>
#include <vector>
#include <random>
#define DEBUG

class cool_tab{
public:
    cool_tab();

private:
    std::vector<int> cool_v;
    std::vector<int> how_cool_v;

    void fill_vector();
    void search_numbs();
};
#endif //LAB_7_ZADANIE77_H
