#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0, cnt = 0; 
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i % 2 == 0)
            {
                cnt += 2;
                cout << cnt << " ";
            }
            else
            {
                cnt += 1;
                cout << cnt << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}