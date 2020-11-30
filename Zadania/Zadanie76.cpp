//
// Created by Nexif on 01/12/2020.
//

#include "Zadanie76.h"

find_max::find_max() {
    this -> fill_vector();
    this -> find_max_val();
    this -> show_max_val();

}

void find_max::fill_vector() {
    std::random_device rd;
    std::mt19937_64 mt(rd());
    std::uniform_int<int> dist(0,420);

    for (int i = 0; i < 15; ++i) {
        this -> max_fun_v.push_back(dist(mt));
    }
}

void find_max::find_max_val() {
   this -> max = *std::max_element(this -> max_fun_v.begin(), this -> max_fun_v.end());
}

void find_max::show_max_val() const {
    std::cout << "Max value: " << this -> max << std::endl;
}
