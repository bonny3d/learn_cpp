#include <iostream>
#include "../../inc/io.h"

int readNumber(){
    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int x){
    std::cout << "The answer is: " << x << '\n';
}