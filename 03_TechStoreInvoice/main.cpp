#include <iostream>

int main(){

    std::string UrunAdi = "HyperX Cloud II";
    char Kategori = 'G';
    double BirimFiyati = 3450.50;
    int Adet = 2;
    bool HizliKargo = true;
    int HizliKargoUcreti = 150;
    double NihaiToplam = (BirimFiyati * Adet) + (HizliKargo ? HizliKargoUcreti : 0);

    std::cout << "Urun Adi: " << UrunAdi << '\n';
    std::cout << "Kategori: " << Kategori << '\n';
    std::cout << "Birim Fiyati: " << BirimFiyati << '\n';
    std::cout << "Adet: " << Adet << '\n';
    std::cout << "Hizli Kargo: " << (HizliKargo ? "Var" : "Yok") << '\n';
    std::cout << "Toplam Ucret: " << NihaiToplam << '\n';

    return 0;
}