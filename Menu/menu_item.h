//
// Created by Nexif on 25/11/2020.
//

#ifndef LAB_7_MENU_ITEM_H
#define LAB_7_MENU_ITEM_H

#include <cstdio>
#include <string>

class MenuItem {

public:
    //Constructor & Destructor
    MenuItem();
    MenuItem(std::string initTitle, int initIndex);
    MenuItem(std::string initTitle, void(*initFuncPtr)(), int initIndex);

    // Get title
    std::string getTitle();

    // Get index
    int getIndex();

    // Perform callback
    void performCallback();
private:
    // Menu Item Title
    std::string title;

    // Menu Item Index
    int index = 0;

    // Callback pointer
    void(*funcPtr)() = nullptr;
};


#endif //LAB_7_MENU_ITEM_H
