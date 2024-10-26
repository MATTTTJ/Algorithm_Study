#include <iostream>
using namespace std;

int n, a[100][100], nx, ny, cnt, result;
bool b[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y)
{
    if(x < n && x >= 0 && y < n && y >=0 )
    {
        return true;
    }
    else 
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cnt = 0;

            for(int dir =0; dir < 4; dir++)
                {
                    nx = i + dx[dir], ny = j + dy[dir];

                    if(InRange(nx,ny) && a[nx][ny] == 1)
                        {
                            cnt++;
                        }

                    if(cnt >= 3)
                    {
                        result++;
                        break;
                    }
                }
        }
    }
    cout << result ;
    return 0;
}