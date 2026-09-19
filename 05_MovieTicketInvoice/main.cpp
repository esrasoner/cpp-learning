#include <iostream>

int main (){

    std::string FilmAdi = "Interstellar";
    char SalonKodu = 'A';
    double BiletFiyati = 150.75;
    int KisiSayisi = 2;
    bool MisirMenusu = true;
    
    double AraToplam = BiletFiyati * KisiSayisi;
    double NihaiToplam = MisirMenusu ? (AraToplam + 80) : AraToplam;

    std::cout << "Film Adi: " << FilmAdi << '\n';
    std::cout << "Salon Kodu: " << SalonKodu << '\n';
    std::cout << "Kisi Sayisi: " << KisiSayisi << '\n';
    std::cout << "Misir Menusu: " << (MisirMenusu ? "Evet" : "Hayir") << '\n';
    std::cout << "Odenecek Tutar: " << NihaiToplam << '\n';

    return 0;
}