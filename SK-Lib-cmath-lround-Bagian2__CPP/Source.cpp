#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    long int hasil;
    double x = 11.16;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    x = 13.87;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    x = 50.5;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    x = -11.16;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    x = -13.87;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    x = -50.5;
    hasil = lround(x);
    cout << "lround(" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}