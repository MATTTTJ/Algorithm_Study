#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    for(int i =0; i < 5; i++)
    {
        cin >> a;
        
        if(a % 3 == 0)
        {
            continue;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}