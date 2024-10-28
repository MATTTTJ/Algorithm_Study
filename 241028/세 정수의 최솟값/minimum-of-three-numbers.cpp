#include <iostream>
using namespace std;
int a,b,c;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b >> c;

    if(a <= b && b <= c)
    {
        cout << a;
    }    
    else if (b <= a && a <= c)
    {
        cout << b;
    }
    else if(c <= a && a <= b)
    {
        cout << c;
    }
    return 0;
}