#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, sum = 0;
    cin >> a;
    for(int i = 1; i < a; i++)
    {
        if(a % i == a || a % i == 0)
        {
            sum += i;
        }
        
    }

    if(sum == a)
    {
        cout << "P";
    }
    else
        cout << "N";
    return 0;
}