//
// Created by Nexif on 25/11/2020.
//

#include "Zadanie72.h"

invert_smol_tab::invert_smol_tab() {
    invert_smol_tab::invert_tab();
#ifdef DEBUG
    invert_smol_tab::print_invert();
#endif
    //Used to reset the smol_v to it's first state.
    //invert_smol_tab::invert_tab();
}

void invert_smol_tab::invert_tab() {
    std::cout << "REVERSE///////// " << std::endl;
    std::reverse(smol_v.begin(), smol_v.end());
}

void invert_smol_tab::print_invert() {
    for (int i : smol_v) {
        std::cout << i << std::endl;
    }
}


