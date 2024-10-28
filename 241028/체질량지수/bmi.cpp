#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //cout << fixed;
    //cout.precision(1);

    int n,m,b;

    cin >> n >> m;

    b = (10000 * m) / (n * n);

    if((int)b >= 25)
    {
        cout << b << "\n" << "Obesity";
    }
    else
    {
        cout << b;
    }

    return 0;
}