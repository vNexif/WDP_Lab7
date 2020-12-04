//
// Created by Nexif on 04/12/2020.
//

#ifndef LAB_7_ZADANIE79_H
#define LAB_7_ZADANIE79_H

#include <iostream>
#include <vector>
#include <random>

class ciagipociagi{
public:
    ciagipociagi();

private:
    std::vector<int> pociag;
    int_fast32_t poczatek{0}, poczatek_var{0}, dlugosc{1}, max_dlugosc{1};

    void rand();
    void find_pociag();
    void print_pociag() const;

};

#endif //LAB_7_ZADANIE79_H
