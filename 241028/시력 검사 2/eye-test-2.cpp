#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a;
    cin >> a;
    if(a >= 1.0f)
    {
        cout << "High";
    }
    else if ( 0.5f <=  a && a < 1.0f)
    {
        cout << "Middle";
    }
    else if (0.5f > a && 0 <= a)
    cout << "Low";
    return 0;
}