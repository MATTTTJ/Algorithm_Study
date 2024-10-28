#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n == 2)
    {
        cout << "28";
    }
    else if (n == 7 || n == 8 || n ==1 || n == 3 || n == 5 || n == 10 || n == 12)
    {
        cout << "31";
    }
    else if(n == 9 || n == 11 || n == 4 || n == 6)
    {
        cout << "30";
    }
    return 0;
}