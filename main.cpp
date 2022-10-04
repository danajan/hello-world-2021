#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>

int main() {
float x=0;
float aPrumerSum=0;
float aPrumer=0;

   std::ifstream is("data.txt");
   std::istream_iterator<double> start(is), end;
   std::vector<double> data(start, end);
   std::cout << "Read " << data.size() << " data" << std::endl;


for (int i=0; i<data.size(); ++i) {
    if (data.at(i)<9060 && data.at(i) > 2118) {
        x=x+1;
        aPrumerSum = aPrumerSum + data.at(i);
    }
}

    aPrumer = aPrumerSum/x;

    std::cout << "Prumer hodnot je: " << aPrumer << "\n";
    std::cout << "pocet cisel v rozsahu = " << x << "\n";

  return 0;
}
