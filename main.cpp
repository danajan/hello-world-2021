#include <iostream>
#include "include/Bod.h"

int main(){

    Bod r = Bod(3,3);

    r.posun(1.0,1.0);

    r.vypis();

    // std::cout << "Vzdalenost bodu" << "\n";

    return 0;

}
