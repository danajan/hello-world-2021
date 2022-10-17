#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>


int main() {
    int i, j;
    double temp=0;

   std::ifstream soubor("data.txt");
   std::istream_iterator<double> start(soubor), end;
   std::vector<double> data(start, end);
   std::cout << "pocet nacetnych dat " << data.size() << std::endl;

   for (i=1; i < data.size(); ++i) {
        temp=data[i];
        j=i-1;
      while (j >= 0 && data[j] > data[j+1]) {
           data[j+1]=data[j];
           data[j]=temp;
           j=j-1;
     }
    }
    std::ofstream vystupni_soubor("vystup.txt");
    for (int k=0; k < data.size(); ++k){
    vystupni_soubor << data[k] << "\n";
        }
    return 0;
   }
