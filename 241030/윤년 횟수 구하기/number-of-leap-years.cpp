#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b = 0;
    cin >> a;
    for(int i = 1; i <= a; i++)
    {
        if(i % 4 == 0)
        {
            b++;
        }

        if((i % 100 == 0 && i % 400 != 0))
        {
            b--;
        }
    }
    cout << b;
    return 0;
}