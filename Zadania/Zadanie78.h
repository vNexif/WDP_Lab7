//
// Created by Nexif on 04/12/2020.
//

#ifndef LAB_7_ZADANIE78_H
#define LAB_7_ZADANIE78_H

#include <iostream>
#include <fstream>
#include <vector>
#include <csignal>
#define DEBUG

class user_variables{
public:
    user_variables();

private:
    std::vector<int_fast32_t> smol;
    std::vector<int_fast32_t> biggeroni;
    int_fast32_t g{}, var{};

    void fetch_g();
    void fetch_var();

    static void signalHandler(int signum);
};

#endif //LAB_7_ZADANIE78_H
