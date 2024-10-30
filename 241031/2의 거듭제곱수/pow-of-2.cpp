#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, prod = 1, cnt = 0; 
    cin >> a;
    
    while(1)
    {
        prod *= 2;
        cnt++;
        if(prod == a)
        break;
    }
    
    cout << cnt ;
    return 0;
}