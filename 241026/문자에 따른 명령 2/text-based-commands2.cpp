#include <iostream>
#include <string>
using namespace std;

int nx, ny, dir = 3;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
string c;

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> c;

    for(char a : c)
    {
        if(a == 'L')
        {
            dir = (dir + 3) % 4;
        }
        else if (a == 'R')
        {
            dir = (dir + 1) % 4;
        }
        else if (a == 'F')
        {
            nx += dx[dir];
            ny += dy[dir];
        }
    }

    cout << nx << " " << ny;
    return 0;
}