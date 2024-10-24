#include <iostream>
using namespace std;

int main() {
    float a = 0;
    cin >> a;
    cout << fixed;
    cout.precision(1);
    float b = a * 30.48;
    cout << b;
    return 0;
}