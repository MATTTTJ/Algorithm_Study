#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for(int ele : a)
    {
        sum += ele;
    }
    cout << sum;

    return 0;
}