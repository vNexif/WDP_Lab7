//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_ZADANIE71_H
#define LAB_7_ZADANIE71_H

#include <iostream>
#include <vector>
#include <random>
#define DEBUG

class smol_tab{
public:
    smol_tab();

protected:
    std::vector<int> smol_v{};

private:
    void fill_vector();
    void print_vector();
};


#endif //LAB_7_ZADANIE71_H
