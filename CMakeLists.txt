cmake_minimum_required(VERSION 3.17)
project(Lab_7)

set(CMAKE_CXX_STANDARD 14)

set(Menu Menu/menu.h Menu/menu_item.h Menu/menu.cpp Menu/menu_item.cpp )
set(Zadania Zadania/Zadanie71.cpp Zadania/Zadanie71.h Zadania/Zadanie72.cpp Zadania/Zadanie72.h Zadania/Zadanie73.cpp Zadania/Zadanie73.h Zadania/Zadanie74.cpp Zadania/Zadanie74.h)

add_executable(Lab_7 main.cpp ${Menu} ${Zadania})

target_include_directories(Lab_7 PRIVATE Menu)