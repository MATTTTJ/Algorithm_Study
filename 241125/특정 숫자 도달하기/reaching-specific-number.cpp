#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10] = {};
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if(a[i] < 250)
        {
            sum += a[i];
        }
        else
        {
            cout << fixed;
            cout.precision(1);
            cout << sum << " ";
            cout << (float)sum / i;
            break;
        }
    }
    return 0;
}