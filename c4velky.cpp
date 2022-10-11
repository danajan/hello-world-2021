#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>


int main() {

   std::ifstream soubor("data.txt");
   std::istream_iterator<double> start(soubor), end;
   std::vector<double> data(start, end);
   int test[data.size()];
   std::cout << "velikost vektoru " << data.size() << std::endl;

   double temp=0;
   test[0]=data[0];

   for (int i=0; i<data.size(); ++i) {
      while (data[i] > data[i+1]) {
           temp=data[i];
           test[i]=data[i+1];
           data[i+1]=temp;
     }
    }
    std::cout << test[0] << "\n";


    std::ofstream vystupni_soubor("vystup.txt");
    vystupni_soubor << "vektor " << "\n" << data[500] << "\n";

    return 0;
   }
