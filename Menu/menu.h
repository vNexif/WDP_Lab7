//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_MENU_H
#define LAB_7_MENU_H

#include <cstdio>
#include <vector>
#include "menu_item.h"

class Menu {

public:
    //Constructor & Destructor
    Menu();
    Menu(std::string);
    Menu(void(*)(int));
    Menu(std::string, void(*)(int));

    void addItem(std::string);          // Add item from title
    void addItem(std::string,void(*)());    // Add item from title and function pointer

    // Print Menu
    void printMenu();
    void printMenu_NoOption();

private:

    // Menu items
    std::vector<MenuItem*> menuItems;

    // Item count
    int count = 0;

    // Menu header
    std::string header;
    bool hasHeader = false;


// Global callback
void(*globalCallbackPtr)(int) = nullptr;


};

#endif //LAB_7_MENU_H
