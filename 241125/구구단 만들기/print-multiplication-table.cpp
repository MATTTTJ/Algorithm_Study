#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt = 0, min = 99;
    int a[5] = {0};
    cin >> n >> m;


    for(int i = m; i >= n; i--)
    {
        if(i % 2 == 0)
        {
            if(cnt < 5)
            {
                a[cnt++] = i;

                if(min > i)
                {
                    min = i;
                }
            }
        }
    }

    int dest = 1;
    while(dest)
    {
        if(dest >= 10)
        {
            break;
        }

        for(int ele : a)
        {
            if(ele != 0)
            {
                cout << ele << " * " << dest << " = " << ele * dest;
                if(ele != min)
                {
                    cout << " / ";
                }
            }
        }
        cout << '\n';
        dest++;
    }

    return 0;
}