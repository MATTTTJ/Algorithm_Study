#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, cnt = 0, sum = 0;

    cin >> n >> m;

    for(int i = n; i <= m; i++)
    {
        sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }

            if((j == i - 1) && sum == i)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}