#include <iostream>
using namespace std;
int cnt;
char Check(char c, int i)
{
    char result;
    
     if(c == 'Y' && i >= 37)
    {
        result = 'A';
        cnt++;
    }
    else if (c == 'N' && i >= 37)
    {
        result = 'B';
    }
    else if (c == 'Y' && i < 37)
    {
        result = 'C';
    }
    else
    {
        result = 'D';
    }

    if(cnt >= 2)
    {
        return 'X';
    }    
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int b;

    for(int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        
        char tmp = Check(a, b);

        if(tmp == 'X')
        {
            cout << 'E';
            return 0;
        }
    }
    cout << 'N';

    return 0;
}