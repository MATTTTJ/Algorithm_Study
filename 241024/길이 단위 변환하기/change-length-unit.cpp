#include <iostream>
using namespace std;

int main() {
    
    float ft = 30.48;
    double mi = 160934;
    cout << fixed;
    cout.precision(1);
    cout << "9.2ft = " << ft * 9.2f << "cm\n" << "1.3mi = " << mi * 1.3 << "cm"; 
    return 0;
}