#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt = 1;
    int a[5] = {0, 2, 4, 6, 8};
    cin >> n >> m;

    while(cnt)
    {
        for(int i = m; i >= n; i--)
        {
            cout << i << " * " << a[cnt] << " = " << i * a[cnt];
            
            if(i != n)
            {
                cout << " / ";
            }
        }
        cout << '\n';
        cnt++;
        if(cnt >= 5)
        {
            break;
        }
    }

    return 0;
}