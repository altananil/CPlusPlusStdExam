#include <iostream>
#include <compare>

class Point {
public:
    int x, y;

    // Spaceship operatörü (üç yönlü karşılaştırma operatörü)
    auto operator<=>(const Point& other) const = default;

    // Diğer karşılaştırma operatörleri için özel işlevler
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point& other) const {
        return !(*this == other);
    }
};

class Compare_Exam{

public:
    static void Run() {
    Point p1{1, 3};
    Point p2{1, 2};

    // Spaceship operatörü kullanarak karşılaştırma
    auto result = p1 <=> p2;

    if (result == 0) {
        std::cout << "p1 ve p2 esit." << std::endl;
    } else if (result < 0) {
        std::cout << "p1, p2'den kucuk." << std::endl;
    } else {
        std::cout << "p1, p2'den buyuk." << std::endl;
    }

    }
};

