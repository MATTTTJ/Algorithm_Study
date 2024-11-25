#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt, res = 0, tmp = 1;

    cin >> n >> m;

    for(int i = n; i <= m; i++)
    {
        cnt = 0;
        tmp = 1;
        while(true)
        {
            if(i % tmp == 0)
            {
                cnt++;
            }
            tmp++;
            
            if(cnt == 3)
            {
                res++;
                break;
            }
            if(tmp == i)
            {
                break;
            }
        }
    }
    cout << res;
    return 0;
}