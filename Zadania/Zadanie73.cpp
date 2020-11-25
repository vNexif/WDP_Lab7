//
// Created by Nexif on 25/11/2020.
//

#include "Zadanie73.h"

search_smol_tab::search_smol_tab() {
    search_smol_tab::fetch_n();
    search_smol_tab::search();
#ifdef DEBUG
    search_smol_tab::print_search();
#endif
}

void search_smol_tab::fetch_n() {
    std::cout << "Input n to search in the first vector: ", std::cin >> n;
}

void search_smol_tab::search() {
    for (int i = 0; i < smol_v.size(); i++) {
        std::cout << smol_v[i] << std::endl;
        if (smol_v[i] == n){
            std::vector<int> search_helper;
            search_helper.push_back(i);
            search_helper.push_back(smol_v[i]);
            search_v.push_back(search_helper);
        }
    }
}

void search_smol_tab::print_search(){
    std::cout << "The result of search for " << n << std::endl;
    for (int i = 0; i < search_v.size(); i++) {
        std::cout << "New vector place: " << i << std::endl;
        for (int j = 0; j < search_v[i].size(); j++) {
            if (j == 0){
                std::cout << "Old vector place: " << search_v[i][j] << std::endl;
            }
            if (j == 1){
                std::cout << "Vector value: " << search_v[i][j] << std::endl;
                std::cout << std::endl;
            }
        }
    }
}


