#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    cin >> n;
    string s;
    if(n < 0)
    {
        s = "ice";
    }
    else if(n >= 100)
    {
        s = "vaper";
    }
    else 
    {
        s = "water";
    }
    cout << s;

    return 0;
}