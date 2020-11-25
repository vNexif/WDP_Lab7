//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_ZADANIE73_H
#define LAB_7_ZADANIE73_H

#include "Zadanie71.h"
#include <iostream>
#include <vector>

class search_smol_tab : public smol_tab{
public:
    search_smol_tab();

protected:
    std::vector<std::vector<int>> search_v{};
    int n{};

private:
    void fetch_n();
    void search();
    void print_search();
};

#endif //LAB_7_ZADANIE73_H
