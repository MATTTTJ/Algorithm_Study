#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, cntA =0 , cntB=0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a;

        if(a % 3 == 0)
        {
            cntA++;
        }

        if(a % 5 == 0)
        {
            cntB++;
        }
    }
    cout << cntA << " " << cntB;
    return 0;
}