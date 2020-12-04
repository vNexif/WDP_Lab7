//
// Created by Nexif on 04/12/2020.
//

#include "Zadanie79.h"

ciagipociagi::ciagipociagi() {
    this -> rand();
    this -> find_pociag();
    this -> print_pociag();
}

void ciagipociagi::rand() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0,200);

    for (int i = 0; i < 100; ++i) {
       this -> pociag.push_back(dist(mt));
    }
}

void ciagipociagi::find_pociag() {
    try {
        for (int i = 1; i < this -> pociag.size(); ++i) {
            if (this -> pociag.at(i) > this -> pociag.at(i - 1)) {
                this -> dlugosc += 1;

                if (this -> dlugosc > this -> max_dlugosc) {

                    this -> max_dlugosc = this -> dlugosc;

                    this -> poczatek = this -> poczatek_var;

                }
            } else {
                this -> poczatek_var = i;
                this -> dlugosc = 1;
            }
        }
    }
    catch (std::bad_alloc &e){
        std::cerr << e.what() << std::endl;
        std::cerr << "Bad Memory Allocation Error." << std::endl;
        std::cerr << "Halting Program Execution." << std::endl;
        exit(0);
    }
    catch (const std::out_of_range &e) {
        std::cerr << e.what() << std::endl;
        std::cerr << "Out of Range Error." << std::endl;
        std::cerr << "Halting Program Execution." << std::endl;
        exit(0);
    }
}

void ciagipociagi::print_pociag() const {
    std::cout << "The element at " << this -> poczatek << " begins the longest draft." << std::endl;
    std::cout << "The draft contains " << this -> max_dlugosc << " elements." << std::endl;
}
