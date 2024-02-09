#include <iostream>
#include <cmath>

using namespace std;

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два корня: " << root1 << " и " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Один  корень: " << root << endl;
    }
    else {
        cout << "Нету корней" << endl;
    }
}

int main() 
{
    setlocale(LC_ALL, "");
    double a, b, c;
    cout << "Введите коэффициенты (a, b, c) квадратного уравнения: ";
    cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}