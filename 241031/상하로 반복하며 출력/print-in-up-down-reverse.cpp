#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10][10];
    int n; 
    bool c = false;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        c = !c;
        for(int j = 1; j <= n; j++)
        {
            if(c)
            {
                a[j][i] = j;
            }
            else
            {
                if(j == 4)
                a[j][i] = 1;
                else if(j ==  3)
                a[j][i] = 2;
                else if(j == 2)
                a[j][i] = 3;
                else if (j ==1)
                a[j][i] = 4;
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