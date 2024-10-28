#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;

    if(n > m)
    {
        cout << n - m ;
    }
    else
    {
        cout << m - n;
    }
    return 0;
}