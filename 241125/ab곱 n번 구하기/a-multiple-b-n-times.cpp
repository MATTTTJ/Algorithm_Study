#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n,m, sum = 0;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> n >> m;

        sum = n;

        for(int j = n + 1; j <= m; j++)
        {
            sum *= j;    
        }
        cout << sum << endl;

    }


    return 0;
}