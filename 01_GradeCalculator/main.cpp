#include <iostream>

int main(){

    std::string DersAdi = "Bilgisayar Programlama";
    int VizeNotu = 75;
    double FinalNotu = 85.5;
    bool GecmeDurumu = true;
    double Ortalama = (VizeNotu * 0.4) + (FinalNotu * 0.6);

    std::cout << "Ders Adi: " << DersAdi << '\n';
    std::cout << "Vize Notu: " << VizeNotu << '\n';
    std::cout << "Final Notu: " << FinalNotu << '\n';
    std::cout << "Ortalama: " << Ortalama << '\n';
    std::cout << "Gecme Durumu: " << (GecmeDurumu ? "Gecti" : "Kaldi") << '\n';

    return 0;
}