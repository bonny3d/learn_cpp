#include <iostream>

int dtv(){

    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    std::cout <<  "Double " << num << " is: " << num * 2 << "\nTriple " << num << " is: " << num * 3 << '\n';
    return 0;
}