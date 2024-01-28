#include <iostream>
#include <any>

#include "STL\AnyExam.cpp"
#include "STL\BitsetExam.cpp"
#include "STL\ChronoExam.cpp"
#include "STL\CompareExam.cpp"
#include "STL\CsetjmpExam.cpp"
#include "STL\CsignalExam.cpp"





int main() {
   
    Any_Exam::Run();
    std::cout<<"--------------------------------------"<<std::endl;
    Bitset_Exam::Run();
    std::cout<<"--------------------------------------"<<std::endl;
    Chrono_Exam::Run();
    std::cout<<"--------------------------------------"<<std::endl;
    Compare_Exam::Run();
    std::cout<<"--------------------------------------"<<std::endl;
    //Csetjmp_Exam::Run();
    std::cout<<"--------------------------------------"<<std::endl;
    Csignal_Exam::Run();






    std::cout << "Main Sonlaniyorrrr....." << std::endl;

    return 0;
}
