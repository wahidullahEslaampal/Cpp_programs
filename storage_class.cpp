#include <iostream>
using namespace std;

int x = 50;
extern int x;

void demo() {
    int a = 10;        // auto (default)
    int b = 20;        // مخکې register و
    static int c = 0;  // static variable

    c++;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << x << endl;
}

int main() {
    demo();
    demo();
}