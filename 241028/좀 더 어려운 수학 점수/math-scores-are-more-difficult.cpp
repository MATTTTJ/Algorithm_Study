#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int c, d;

    cin >> a >> b;
    cin >> c >> d;

    
    if(a > c)
    {
        cout << "A";
    }
    else if(a == c && b > d)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
    }
    
    return 0;
}