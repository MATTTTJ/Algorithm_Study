#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a ;
    bool b = false;
    cin >> a;
    for(int i = 2; i < a -1; i++)
    {
        if(a % i == 0)
        {
            b = true;
            break;
        }
    }
    if(b)
    {
        cout << "C";
    }
    else
        cout << "N";
    return 0;
}