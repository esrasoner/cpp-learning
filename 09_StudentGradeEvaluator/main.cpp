#include <iostream>

int main(){

    int VizeNotu = 75;
    int FinalNotu = 40;
    double Ortalama = VizeNotu * 0.4 + FinalNotu * 0.6;

    std::string Durum = (FinalNotu < 50) ? "Gecmisler Olsun" : ((Ortalama >= 60) ? "Tebrikss" : "But yolu gozuktu");
  
    std::cout << "Ortalama: " << Ortalama << '\n';
    std::cout << "Durum: " << Durum << '\n';

    return 0;
}

