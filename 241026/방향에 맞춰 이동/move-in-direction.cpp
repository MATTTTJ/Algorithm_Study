#include <iostream>
using namespace std;

int  n, dir, dist;
char c;
int nx, ny;
int dx[4] = {1, 0, -1, 0}; 
int dy[4] = {0, -1, 0, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i< n; i++)
    {
        cin >> c >> dist ;

        if(c == 'E')
        {
           dir = 0; 
        } 
        else if(c == 'S')
        {
            dir = 1;
        }
        else if(c == 'W')
        {
            dir = 2;
        }
        else
        {
            dir = 3;
        }

        nx += dx[dir] * dist;
        ny += dy[dir] * dist;
        
    }

    cout << nx << " " << ny;
    return 0;
}