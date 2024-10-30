#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a, sum =0;
    cin >> a;
    for(int i = 0; i < n; i++)
    {
        cin >> a; 
        
        if(a % 2 == 1 && a % 3 == 0)
        {
            sum += a;
        }
    }
    cout << sum;
    return 0;
}