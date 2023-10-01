// lab-3.4.cpp
// Агієвич Дар'я
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;

int main() {
    double x, y, R; // вхідні аргументи

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі
    if(((y >= x) && (x * x + y * y <= R * R) && x >= 0) || (y <= x ) && (x * x + y * y <= R * R) && (x <= 0)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}