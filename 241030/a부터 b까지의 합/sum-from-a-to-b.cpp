#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum= 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}