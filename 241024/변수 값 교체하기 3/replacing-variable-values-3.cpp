#include <iostream>
using namespace std;

int a, b;

int main() {
    a = 3;
    b = 5;
    int temp = a;
    a = b;
    b = temp; 
    cout << a << "\n" << b;    
    return 0;
}