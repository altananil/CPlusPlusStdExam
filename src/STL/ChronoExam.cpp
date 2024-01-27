#include <iostream>
#include <chrono>
#include <thread>

class Chrono_Exam{

public:
    static void Run() {
     // Şu anki zamanı elde et
        auto baslangicZamani = std::chrono::high_resolution_clock::now();

        // Biraz bekletme (örneğin, 2 saniye)
        std::this_thread::sleep_for(std::chrono::seconds(2));

        // Şu anki zamanı tekrar elde et
        auto bitisZamani = std::chrono::high_resolution_clock::now();

        // Geçen süreyi hesapla
        auto gecenSure = std::chrono::duration_cast<std::chrono::milliseconds>(bitisZamani - baslangicZamani);

        // Elde edilen süreyi ekrana yazdır
        std::cout << "Gecen sure: " << gecenSure.count() << " milisaniye" << std::endl;

    }
};
