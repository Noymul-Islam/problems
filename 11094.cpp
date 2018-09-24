
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int n, m, i, j, ans, sum;
string map[21];
char now;
bool visit[21][21];

void dfs(int x, int y)
{
    if(y < 0)   y = m-1;
    if(y >= m)  y = 0;

    if(x < 0 || x >= n || visit[x][y] == true || map[x][y] != now) return ;

    visit[x][y] = true;
    sum++;

    dfs(x+1, y);
    dfs(x, y+1);
    dfs(x-1, y);
    dfs(x, y-1);
}
int main()
{
    while(cin>>n>>m)
    {
        memset(visit, false, sizeof(visit));

        for(i = 0; i < n; i++)  cin>>map[i];
        cin>>i>>j;

        now = map[i][j];
        dfs(i, j);
        ans = 0;

        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                sum = 0;
                if(visit[i][j]==false)   dfs(i, j);
                if(sum > ans)   ans = sum;
            }
        }

        printf("%d\n", ans);
    }
}
