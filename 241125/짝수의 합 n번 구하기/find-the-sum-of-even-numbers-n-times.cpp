#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, n, m, sum=0;
    cin >> a;
    for(int i = 0 ; i < a; i++)
    {
        cin >> n >> m;
        sum = 0;
        for(int j = n; j <= m; j++)
        {
            if(j % 2 == 0)
            {
                sum += j;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}