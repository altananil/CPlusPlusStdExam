#include <iostream>
#include <bitset>

class Bitset_Exam{

public:
    static void Run() {
    // 8 bitlik bir bit kümesi oluşturun ve varsayılan olarak sıfırla
    std::bitset<8> bitSet;

    // Bazı bitlere değer atayın
    bitSet[1] = 1;
    bitSet[4] = 1;
    bitSet[7] = 1;

    // Bit kümesini ekrana yazdırın
    std::cout << "Bitset degeri: " << bitSet << std::endl;

    // Bir integer değerini kullanarak bit kümesini oluşturun
    std::bitset<8> digerBitSet(0b11001010);

    // Yeni bit kümesini ekrana yazdırın
    std::cout << "Diger bitset degeri: " << digerBitSet << std::endl;

    // Bit kümesindeki belirli bir biti kontrol etme
    std::cout << "3. bit degeri: " << bitSet[3] << std::endl;

    // Bit kümesini bir integer değerine dönüştürme
    unsigned long int deger = bitSet.to_ulong();
    std::cout << "Bitset'i integer'a donusturulen deger: " << deger << std::endl;
    }
};
