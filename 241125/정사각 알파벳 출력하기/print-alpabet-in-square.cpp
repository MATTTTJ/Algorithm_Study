#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c = 'A';
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ;j < n; j++)
        {
            cout << c++;
        }
        cout << endl;
    }

    return 0;
}