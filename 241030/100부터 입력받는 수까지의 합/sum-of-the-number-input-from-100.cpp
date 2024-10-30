#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, sum = 0;

    cin >> a;

    for(int i = a; i <= 100; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}