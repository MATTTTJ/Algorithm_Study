#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, tmp = 1, res = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cnt = 0;
        tmp = 1;
        while(true)
        {
            if(i % tmp == 0)
            {
                cnt++;
                if(cnt > 2)
                {
                    break;
                }
            }

            if(tmp + 1 > i)
            {
                if(cnt == 2)
                {
                    cout << i << " ";
                    break;
                }
                break;
            }
            tmp++;
        }
    }
    return 0;
}