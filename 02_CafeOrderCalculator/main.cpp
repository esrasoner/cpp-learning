#include <iostream>

int main(){

    std::string KahveTuru = "Cappuccino";
    char BardakBoyutu = 'L';
    int BardakSayisi = 3;
    bool OgrenciIndirimi = true;
    double BardakFiyati = 85.50;

    double ToplamFiyat = BardakFiyati * BardakSayisi;
    double Indirim = OgrenciIndirimi ? ToplamFiyat * 0.10 : 0;

    std::cout << "Siparis: " << KahveTuru << '\n';
    std::cout << "Bardak Boyutu: " << BardakBoyutu << '\n';
    std::cout << "Bardak Ucreti: " << BardakFiyati << '\n';
    std::cout << "Bardak Sayisi: " << BardakSayisi << '\n';
    std::cout << "Ogrenci Indirimi: " << (OgrenciIndirimi ? "Var" : "Yok") << '\n';

    std::cout << "Toplam Ucret: " << (ToplamFiyat - Indirim) << '\n';

    return 0;
}