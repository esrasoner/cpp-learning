#include <iostream>

int main(){

    int Sicaklik = 12;
    std::string Tavsiye = (Sicaklik > 25) ? "Cook sicakk" : ((Sicaklik > 10) ? "Hirka fena olmaz" : "Mont sart");

    std::cout << "Tavsiyem: " << Tavsiye << '\n';

    return 0;
}


