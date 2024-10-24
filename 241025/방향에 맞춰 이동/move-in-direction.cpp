#include <iostream>
using namespace std;

int x, y, n;
int dx[4] = {1, -1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    while(n--)
    {
        char c_dir; int dist;
        cin >> c_dir >> dist;
        int dir;
        if(c_dir == 'E')
        {
            dir = 0;
        }
        else if (c_dir == 'W')
        {
            dir = 1;
        }
        else if (c_dir == 'S')
        {
            dir = 2;
        }
        else
        {
            dir = 3;
        }

        x += dx[dir] * dist;
        y += dy[dir] * dist;
    }

    cout << x << " " << y;
    return 0;
}