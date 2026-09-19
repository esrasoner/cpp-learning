#include <iostream>

int main (){

    std::string UyeAdi = "Ahmet Yilmaz";
    char UyelikTipi = 'V';
    double AylikUcret = 850.50;
    int AySayisi = 6;
    bool OgrencilikDurumu = true;
    double AraToplam = AylikUcret * AySayisi;
    double NihaiToplam = OgrencilikDurumu ? (AraToplam - 200) : AraToplam;

    std::cout << "Uye Adi: " << UyeAdi << '\n';
    std::cout << "Uyelik Tipi: " << UyelikTipi << '\n';
    std::cout << "Uyelik Suresi (Ay): " << AySayisi << '\n';
    std::cout << "Ogrencilik Durumu: " << (OgrencilikDurumu ? "Evet" : "Hayir") << '\n';
    std::cout << "Odenecek Tutar: " << NihaiToplam << '\n';

    return 0;
}