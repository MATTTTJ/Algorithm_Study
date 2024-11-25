#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        while(true)
        {
            if(m == 1)
            {
                break;
            }

            cnt++;
            if(m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m = m * 3 + 1;
            }
        }
        cout << cnt << endl;;
    }
 
    return 0;
}