#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int temp  = a;
    a = b; 
    b = temp;
    cout << a << " " << b;
    return 0;
}