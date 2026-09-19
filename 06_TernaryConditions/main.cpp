#include <iostream>

int main(){

    char BiletTuru = 'Y';
    std::string HangiBiletTuru = (BiletTuru == '0') ? "%50 Indirim" : ((BiletTuru == 'Y') ? "%25 Indirim" : "Indirim Yok");  

    std::cout << "Bilet Turu: " << HangiBiletTuru << '\n';

    return 0;
}