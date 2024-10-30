#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10][10];
    int n, cnt = 0; 
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cnt = 1;
        if(i % 2 == 1)
        {
            for(int j = 1; j <= n; j++)
            {
                a[j][i] = j;
            }
        }
        else
        {
            for(int j = n; j >= 1; j--)
            {
                a[cnt++][i] = j;
            }
        }
        
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}