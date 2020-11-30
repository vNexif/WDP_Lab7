//
// Created by Nexif on 30/11/2020.
//

#ifndef LAB_7_ZADANIE75_H
#define LAB_7_ZADANIE75_H

#include <iostream>
#include <vector>
#include <random>

class input_freq{
public:
    input_freq();

private:
    std::vector<int> data_v{};
    int user_s_in{};
    float how_many{0};

    void fill_vector();
    void fetch_user_search();
    void calc_user_freq();
    void show_user_freq() const;
};
#endif //LAB_7_ZADANIE75_H
