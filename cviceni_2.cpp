#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

int main() {
    int ageMin=18;
    int ageMax=120;
    int heightMin=100;
    int heightMax=230;
    int vek;
    float vyska;
    int x=1;
    int vzdelani;
    int y;

    std::cout << "Zadejte krestni jmeno: ";
    std::string kJmeno;
    std::cin >> kJmeno;
    std::cout << "Krestni jmeno je " << kJmeno << "\n";
    std::cout << "Zadejte prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;
    std::cout << "Prijmeni je " << prijmeni << "\n";

	while (x==1){
	std::cout << "Zadejte vek: ";
    std::cin >> vek;
    if (vek >= ageMin & vek <= ageMax) {
    std::cout << "Vek = " << vek << "\n";
    x=2;
    }
    else {
        std::cout << "Neplatny vek" << "\n";
     }
	}

	while (x==2){
	std::cout << "Zadejte vysku [cm]: ";
    std::cin >> vyska;
    if (vyska >= heightMin & vyska <= heightMax) {
    std::cout << "Vyska = " << vyska;
    std::cout << " cm" << "\n";
    x=3;
    }
    else {
        std::cout << "Neplatna vyska" << "\n";
     }
	}

    while (x==3){
            enum typVzdelani {zs, ss, vs};
    std::cout << "Zadejte dosazene vzdelani (0=zs; 1=ss; 2=vs;): ";
    typVzdelani skola;
    std::cin >> y;
    skola = (enum typVzdelani)y;
    if (skola == zs){
        std::cout << "Vzdelani je zs" << "\n";
        x=4;
    }
    else if (skola == ss){
        std::cout << "Vzdelani je ss" << "\n";
        x=4;
    }
    else if (skola == vs){
        std::cout << "Vzdelani je vs" << "\n";
        x=4;
    }
    else {
        std::cout << "Chybna hodnota" << "\n";
     }
    }

    std::ofstream vystupni_soubor("vystup.txt");

    vystupni_soubor << "Jmeno: " << kJmeno << "\n";
    vystupni_soubor << "Prijmeni: " << prijmeni << "\n";
    vystupni_soubor << "Vyska: " << vyska;
    vystupni_soubor << " [cm]" << "\n";
    vystupni_soubor << "Vek: " << vek << "\n";
    vystupni_soubor << "Vzdelani (0=zs; 1=ss; 2=vs;): " << y << "\n";

	return 0;
}
