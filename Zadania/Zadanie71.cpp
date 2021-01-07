//
// Created by Nexif on 25/11/2020.
//

#include "Zadanie71.h"

smol_tab::smol_tab() {
    smol_tab::fill_vector();
#ifdef DEBUG
    smol_tab::print_vector();
#endif
}


void smol_tab::fill_vector() {
    std::random_device rd;
    std::mt19937_64 mt(rd());
    std::uniform_int<int> dist(-10,10);
    for (int i = 0; i < 30; ++i) {
        smol_v.push_back(dist(mt));
    }

}

void smol_tab::print_vector() {
    for (int i : smol_v) {
        std::cout << i << std::endl;
    }
}
