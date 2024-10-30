#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cntA = 0, sumA = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            cntA++;
            sumA += i;
        }
    }
    cout << fixed;
    cout.precision(1);

    cout << sumA << " " << (float)sumA / cntA;
    return 0;
}