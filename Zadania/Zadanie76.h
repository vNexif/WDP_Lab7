//
// Created by Nexif on 01/12/2020.
//

#ifndef LAB_7_ZADANIE76_H
#define LAB_7_ZADANIE76_H

#include <iostream>
#include <random>
#include <vector>


class find_max{
public:
    find_max();

private:
    std::vector<int> max_fun_v;

    int max{};

    void fill_vector();
    void find_max_val();
    void show_max_val() const;
};
#endif //LAB_7_ZADANIE76_H
