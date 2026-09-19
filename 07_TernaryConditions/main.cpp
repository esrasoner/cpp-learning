#include <iostream>

int main(){

    int Can = 45;

    std::string Durum = (Can > 70) ? "Guclu" : ((Can > 30) ? "Yarali" : "Kritik");

    std::cout << "Can Durumu: " << Durum << '\n';

    return 0;
}