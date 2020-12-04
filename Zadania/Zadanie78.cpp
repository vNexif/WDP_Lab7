//
// Created by Nexif on 04/12/2020.
//

#include "Zadanie78.h"

user_variables::user_variables() {
    this -> fetch_g();
    this -> fetch_var();
}

void user_variables::signalHandler( int signum ){
    std::cerr << "interrupt signal (" << signum << ") received." << std::endl;
    exit(signum);
}

void user_variables::fetch_g() {
    try {
        std::cout << "Input g value which is the range point that determines upper and lower ranges." << std::endl;
        std::cin >> this -> g;
        if (std::cin.fail()){
             std::cin.exceptions( std::istream::failbit | std::istream::badbit );
        }
    }
    catch (std::ifstream::failure &e){
        std::cerr << "Bad input value of g." << std::endl;
    }
}

void user_variables::fetch_var() {
    std::cout << "Input variable which will be compared to g and pushed to the upper or lower vector." << std::endl;
    std::cout << "If the input value will be equal to g, then nothing will be done." << std::endl;
    //Make that handler go skrrrt bcs it doesn't workiblonki.
    std::signal(SIGINT, user_variables::signalHandler);
    std::cin >> this -> var;
    std::cin.exceptions( std::istream::failbit | std::istream::badbit );
    try {
            if (this -> var == this -> g) {
                std::cout << "The value of var i equal to g. \nNothing will be done." << std::endl;
            }

            if (this -> var > this -> g) {
                #ifdef DEBUG
                    std::clog << "Pushing var to biggeroni vector." << std::endl;
                #endif

                this -> biggeroni.push_back(var);

                #ifdef DEBUG
                    std::clog << "Pushed var to biggeroni vector successfully :)" << std::endl;
                #endif
            }

            if (this -> var < this -> g){
                #ifdef DEBUG
                    std::clog << "Pushing var to smol vector." << std::endl;
                #endif

                this -> smol.push_back(var);

                #ifdef DEBUG
                    std::clog << "Pushed var to smol vector successfully :)" << std::endl;
                #endif
            }
    }
    catch (std::ifstream::failure &e){
        std::cerr << "Bad input value of g." << std::endl;
    }
    catch (std::bad_alloc &ex){
        std::cerr << "Bad Alloc Error." << std::endl;
        std::cerr << "Possible cause: Vector memory leak or app oom." << std::endl;
        std::cerr << ex.what() << std::endl;
    }
}
