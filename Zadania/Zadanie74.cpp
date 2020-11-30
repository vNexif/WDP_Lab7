//
// Created by Nexif on 25/11/2020.
//

#include "Zadanie74.h"




sort_smol_tab::sort_smol_tab() {
    this -> options();
    this -> fetch_option();
    this -> menu_logic();
}





void sort_smol_tab::options() {
    Menu sort("Select sort:");
    sort.addItem("EasySort ASC");
    sort.addItem("EasySort DSC"); // You can have global callback and individual callbacks
    sort.addItem("QuickSort ASC");
    sort.addItem("QuickSort DSC");

    sort.printMenu_NoOption();
}

void sort_smol_tab::fetch_option(){
    try {
        std::cin >> this -> option;

        if ( std::cin.fail() ){
            throw std::runtime_error("Input error");
        }
    }
    catch (std::exception& e) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << e.what() << std::endl;
        this -> option = -1;
    }
}

void sort_smol_tab::menu_logic(){
    try {
        if ( this -> option == 0 ){
            this -> EasySort_ASC();
        }

        if ( this -> option == 1 ){
            this -> EasySort_DSC();
        }

        if ( this -> option == 2 ){
            this -> QuickSort_ASC();
        }

        if ( this -> option == 3){
            this -> QuickSort_DSC();
        }
        if ( this -> option < 0 || this -> option > 3 ){
            throw std::runtime_error("Input out of range");
        }
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void sort_smol_tab::Vect_To_Tab(){
    for ( int i = 0; i < 30; ++i ) {
       this -> smol_tab[i] = this -> smol_v[i];
    }
}




void sort_smol_tab::EasySort_ASC() {
    std::sort( this -> smol_v.begin(), this -> smol_v.end(), std::greater<>() );
#ifdef DEBUG
    std::cout << "ASC SORT//////" << std::endl;
#endif
    for ( int i : this -> smol_v ) {
        std::cout << i << std::endl;
    }
}

void sort_smol_tab::EasySort_DSC() {
    std::sort( this -> smol_v.begin(), this -> smol_v.end(), std::less<>() );
#ifdef DEBUG
    std::cout << "DSC SORT//////" << std::endl;
#endif
    for ( int i : this -> smol_v ) {
        std::cout << i << std::endl;
    }
}

int sort_smol_tab::Compare_ASC(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

void sort_smol_tab::QuickSort_ASC(){
    this -> Vect_To_Tab();
    std::qsort( this -> smol_tab, 30, sizeof(int), this -> Compare_ASC );
    for ( int i : this -> smol_tab ) {
        std::cout << "Chuj :" << i << std::endl;
    }
}

int sort_smol_tab::Compare_DSC(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b);
}

void sort_smol_tab::QuickSort_DSC() {
    this -> Vect_To_Tab();
    std::qsort( this -> smol_tab, 30, sizeof(int), this -> Compare_DSC );
    std::reverse( this -> smol_tab, this -> smol_tab + (sizeof( this -> smol_tab )/ sizeof( this -> smol_tab[0] )));
    for ( int i : this -> smol_tab ) {
        std::cout << "Chuj :" << i << std::endl;
    }
}
