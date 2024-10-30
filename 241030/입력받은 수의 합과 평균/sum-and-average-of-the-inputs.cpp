#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, cnt = 0, sum = 0;

    cin >> a;

    for(int i = 0; i < a; i++)
    {
        cin >> b;

        sum += b;
        cnt++;
    }
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (float)sum / cnt;

    return 0;
}