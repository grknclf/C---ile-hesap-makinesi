#include <iostream>
#include <cmath>

const double PI = 3.14159265;  // Sabit olarak pi kullandım daire alanı hesaplatacağım


double Topla(double sayi1, double sayi2) {
    return sayi1 + sayi2;
}

double Cikar(double sayi1, double sayi2) {
    return sayi1 - sayi2;
}

double Carp(double sayi1, double sayi2) {
    return sayi1 * sayi2;
}

double Bol(double sayi1, double sayi2) {
    if (sayi2 != 0) {
        return sayi1 / sayi2;
    } else {
        std::cout << "Payda Sifir Olamaz!" << std::endl;
        return 0;
    }
}


int Faktoriyel(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    char islem;
    double sayi1, sayi2; // Değişkenleri atadık

    while (true) {
        std::cout << "Islem seciniz: (Toplama(+), Cikarma(-), Carpma(*), Bolme(/), Faktoriyel(f), Daire Alan Hesabi(a), Cikis(q))";
        std::cin >> islem;

        if (islem == 'q') {
            std::cout << "Cikiliyor..." << std::endl;
            break;
        }

        if (islem == 'a') {
            double yariCap;
            std::cout << "Dairenin yaricapini giriniz: ";
            std::cin >> yariCap;

            if (yariCap < 0) {

                std::cout << "Negatif yaricap kullanilamaz!" << std::endl;
            } else {
                double alan = PI * pow(yariCap, 2);
                std::cout << "Dairenin Alani: " << alan << std::endl;
            }
        } else if (islem == 'f') {
            int n;
            std::cout << "Faktoriyelini hesaplamak istediginiz sayiyi girin: ";
            std::cin >> n;

            if (n < 0) {
                std::cout << "Negatif sayilarin faktoriyeli hesaplanamaz!" << std::endl;
            } else {
                int faktoriyelSonuc = Faktoriyel(n);
                std::cout << n << " sayisinin faktoriyeli: " << faktoriyelSonuc << std::endl;
            }
        } else {
            std::cout << "İlk sayiyi girin: ";
            std::cin >> sayi1;

            std::cout << "İkinci sayiyi girin: ";
            std::cin >> sayi2;

            double sonuc;

            switch (islem) {
                case '+':
                    sonuc = Topla(sayi1, sayi2);
                    break;
                case '-':
                    sonuc = Cikar(sayi1, sayi2);
                    break;
                case '*':
                    sonuc = Carp(sayi1, sayi2);
                    break;
                case '/':
                    sonuc = Bol(sayi1, sayi2);
                    break;
                default:
                    std::cout << "Geçersiz islem!" << std::endl;
                    continue;
            }

            std::cout << "Sonuc: " << sonuc << std::endl;
        }
    }

    return 0;
}