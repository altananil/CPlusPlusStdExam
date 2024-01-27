#include <stdio.h>
#include <setjmp.h>



class Csetjmp_Exam{

public:
    // setjmp ve longjmp için bir jmp_buf türü oluşturulur
    static jmp_buf jumpBuffer;


    static void Run() {
    // setjmp çağrısından sonra buraya geri dönülür
        if (setjmp(jumpBuffer) == 0) {
            printf("main: setjmp ile başarili bir sekilde cagrildi\n");

            // func1'i çağır
            func1();
        } else {
            // longjmp çağrısından sonra buraya geri dönülür
            printf("main: longjmp tarafindan cagrildi\n");
        }
    }

    static void func2() {
        printf("func2: Basliyor\n");

        // longjmp kullanarak setjmp'ye geri dön
        longjmp(jumpBuffer, 1);

        printf("func2: Bu kod calismayacak\n");
    }   

    static void func1() {
        printf("func1: Basliyor\n");

        // func2'yi çağırır
        func2();

        printf("func1: Bu kod calismayacak\n");
}
};
