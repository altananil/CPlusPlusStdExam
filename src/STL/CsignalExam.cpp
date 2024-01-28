#include <iostream>
#include <csignal>
#include <cstdlib> // exit için gerekli
#include <chrono>
#include <thread>


class Csignal_Exam{

public:
    
   //static bool isResult;
   /*
   static void Run() {
        // Sinyal işleyiciyi tanımlama
        std::signal(SIGINT, signalHandler); // Ctrl+C'ye basıldığında SIGINT sinyali alınır.

        std::cout << "Program calisiyor. Cikis yapmak icin Ctrl+C kullanabilirsiniz." << std::endl;
        isResult = true;
        // Sonsuz bir döngüde programı tutma
        while (isResult) {
            // Programın ana mantığı buraya gelebilir.

            // Örneğin, her 5 saniyede bir bir mesaj yazdıralım
            std::cout << "Program hala calisiyor..." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(5));
        }   

    }*/

    static void Run() {
        int count = 0; 
        signal(SIGSEGV, signal_handler); 

        while (count < 5) 
        { 
            std::cout << "Program hala calisiyor..." << std::endl;

            if (count == 3) 
                raise(SIGSEGV); 
            
            count++;

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }  

    }

    static void signalHandler(int signal) {
        std::cout << "Sinyal alindi: " << signal << std::endl;

        if (signal == SIGINT) {
            std::cout << "Ctrl+C'ye basildi. Program guvenli bir sekilde sonlandiriliyor." << std::endl;

            // Programı güvenli bir şekilde sonlandırma
            //exit(signal);
        }
    }
    static void signal_handler(int signal_num) 
    { 
        std::cout << "Interrupt (" << signal_num << ").\n"; 
    
        // It terminates program
        exit(signal_num); 
    } 

};
