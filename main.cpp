//
// Created by Nexif on 25/11/2020.
//

#include <iostream>
#include "Menu/menu.h"
#include "Zadania/Zadanie71.h"
#include "Zadania/Zadanie72.h"
#include "Zadania/Zadanie73.h"
#include "Zadania/Zadanie74.h"
#include "Zadania/Zadanie75.h"

void globalCallback(int option) {
    std::cout << "Global Callback | Selection: " << option << std::endl;
}

void zadanie1() {
    std::cout << "You've selected random fill bruh" << std::endl;
    smol_tab smolTab;
}

void zadanie2() {
    std::cout << "Item Callback | Selected option 1" << std::endl;
    invert_smol_tab invertSmolTab;
}

void zadanie3() {
    std::cout << "Item Callback | Selected option 2" << std::endl;
    search_smol_tab searchSmolTab;
}

void zadanie4() {
    std::cout << "Item Callback | Selected option 2" << std::endl;
    sort_smol_tab sortSmolTab;
}

void zadanie5(){
    std::cout << "Item Callback | Selected option %%" << std::endl;
    input_freq inputFreq;
}

int main(int argc, const char * argv[]) {


    // Menu with header and global callbacks
    Menu zadania("Select task:", &globalCallback);

    zadania.addItem("Zadanie 1", &zadanie1);
    zadania.addItem("Zadanie 2", &zadanie2); // You can have global callback and individual callbacks
    zadania.addItem("Zadanie 3", &zadanie3);
    zadania.addItem("Zadanie 4", &zadanie4);
    zadania.addItem("Zadanie 5", &zadanie5);

    zadania.printMenu();

    return 0;
}