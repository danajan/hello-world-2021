#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

int main() {

	std::cout << "Zadej vek: ";
    int cele_cislo;
    std::cin >> cele_cislo;

    std::cout << "Cislo = " << cele_cislo << "\n";

    std::cout << "Zadej jmeno: ";
    std::string jmeno;
    std::cin >> jmeno;
    std::cout << "Jmeno je " << jmeno << "\n";

    enum typ_vzdelani {zs,ss,vs};

    typ_vzdelani skola = zs;

    if (skola == ss)    {
        std::cout << "Vzdelani je stredni skola\n";
    }
    else if (skola == zs) {
        std::cout << "Vzdelani je zs\n";
    }
    else {
        std::cout << "Vzdelani je vs";
    }

    std::ofstream vystupni_soubor("vystup.txt");

    vystupni_soubor << "Jmeno: " << jmeno << "\n";

	return 0;
}
