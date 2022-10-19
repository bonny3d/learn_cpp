#include <iostream>
#include "inc/io.h"
#include "inc/add.h"


int main(){
    // read numbers
    int x{readNumber()};
    int y{readNumber()};

    // write the answer
    writeAnswer(x + y);
    return 0;
}

