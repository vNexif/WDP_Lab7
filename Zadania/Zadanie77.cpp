//
// Created by Nexif on 01/12/2020.
//

#include "Zadanie77.h"

cool_tab::cool_tab() {
    cool_tab::fill_vector();
    cool_tab::search_numbs();

}

void cool_tab::fill_vector() {
    std::random_device rd;
    std::mt19937_64 mt(rd());
    std::uniform_int<int> dist(1,10);

    for (int i = 0; i < 100; ++i) {
        cool_v.push_back(dist(mt));
    }
}

void cool_tab::search_numbs() {
    //This can be probably optimized some way or another ;v
    std::sort(cool_v.begin(), cool_v.end());
    try {
        #ifdef DEBUG
            std::cout << "The cool_v has size of " << cool_v.size() << std::endl;
        #endif
        int32_t n_many = 0;
        for (int i = 0; i < cool_v.size(); ++i) {

            if (cool_v[i] == 1) {
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 1: " << how_cool_v.at(0) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 2){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 2: " << how_cool_v.at(1) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 3){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 3: " << how_cool_v.at(2) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 4){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 4: " << how_cool_v.at(3) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 5){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 5: " << how_cool_v.at(4) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 6){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 6: " << how_cool_v.at(5) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 7){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 7: " << how_cool_v.at(6) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 8){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 8: " << how_cool_v.at(7) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 9){
                n_many += 1;
                if (cool_v[i] != cool_v[i+1]){
                    how_cool_v.push_back(n_many);
                    n_many = 0;
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 9: " << how_cool_v.at(8) << std::endl;
                    #endif
                }
            }

            if (cool_v[i] == 10){
                n_many += 1;
                if ((i+1) == cool_v.size()) {
                    how_cool_v.push_back(n_many);
                    #ifdef DEBUG
                        std::cout << "Liczba wart. 10: " << how_cool_v.at(9) << std::endl;
                    #endif
                }
            }
        }
    }
    catch (std::out_of_range const& ex) {
        std::cout << ex.what() << std::endl;
    }
}
