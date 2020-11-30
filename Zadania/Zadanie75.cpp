//
// Created by Nexif on 30/11/2020.
//

#include "Zadanie75.h"

input_freq::input_freq() {
    this -> fill_vector();
    this -> fetch_user_search();
    this -> calc_user_freq();
    this -> show_user_freq();
}


void input_freq::fill_vector() {
    std::random_device rd;
    std::mt19937_64 mt(rd());
    std::uniform_int_distribution<int> dist(0,10);
    for (int i = 0; i < 20; ++i) {
       this -> data_v.push_back(dist(mt));
    }
}

void input_freq::fetch_user_search() {
    std::cout << "Input a number in range <0,10> to search for in the randomized vector: " << std::endl;

    try {
        std::cin >> this -> user_s_in;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::runtime_error("Bad user input");
        }
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void input_freq::calc_user_freq(){
    for ( int i : this -> data_v ) {
        if ( i == this -> user_s_in ) {
            this -> how_many += 1;
        }
    }
}


void input_freq::show_user_freq() const {
    std::cout << "The given number has a " << this -> how_many << "/20 ratio or a calculated ratio of " << float (this -> how_many / 20) << std::endl;
}


