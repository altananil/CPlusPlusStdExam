#include <iostream>
#include <any>

class Any_Exam{

public:
    static void Run() {
        // Herhangi bir türde değeri temsil eden any nesnesi oluşturun
        std::any deger;

        // int türünde bir değer atayın
        deger = 42;

        // Değerin türünü kontrol edin ve çıktı verin
        if (deger.type() == typeid(int)) {
            std::cout << "Deger bir int: " << std::any_cast<int>(deger) << std::endl;
        } else {
            std::cout << "Deger bir int degil." << std::endl;
        }

        // double türünde bir değer atayın
        deger = 3.14;

        // Değerin türünü kontrol edin ve çıktı verin
        if (deger.type() == typeid(double)) {
            std::cout << "Deger bir double: " << std::any_cast<double>(deger) << std::endl;
        } else {
            std::cout << "Deger bir double degil." << std::endl;
        }

        // string türünde bir değer atayın
        deger = std::string("Merhaba, C++!");

        // Değerin türünü kontrol edin ve çıktı verin
        if (deger.type() == typeid(std::string)) {
            std::cout << "Deger bir string: " << std::any_cast<std::string>(deger) << std::endl;
        } else {
            std::cout << "Deger bir string degil." << std::endl;
        }
    }
};


