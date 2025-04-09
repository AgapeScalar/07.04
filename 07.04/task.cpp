#include <iostream>
#include <cmath>
using namespace std;

class Geometry {
private:
    static int calculationCount;  

public:
    
    static double triangleArea(double a, double b, double c) {
        double s = (a + b + c) / 2;  
        calculationCount++;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    static double rectangleArea(double length, double width) {
        calculationCount++;
        return length * width;
    }

    static double squareArea(double side) {
        calculationCount++;
        return side * side;
    }

    static double rhombusArea(double d1, double d2) {
        calculationCount++;
        return (d1 * d2) / 2;
    }

    static int getCalculationCount() {
        return calculationCount;
    }
};

int Geometry::calculationCount = 0;

int main() {
    cout << "Area of Triangle: " << Geometry::triangleArea(3, 4, 5) << endl;
    cout << "Area of Rectangle: " << Geometry::rectangleArea(5, 10) << endl;
    cout << "Area of Square: " << Geometry::squareArea(4) << endl;
    cout << "Area of Rhombus: " << Geometry::rhombusArea(6, 8) << endl;

    cout << "Total calculations: " << Geometry::getCalculationCount() << endl;

    return 0;
}
