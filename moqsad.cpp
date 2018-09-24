
:: er alada kono kaj janina, tobe dekhsi je iteratorer declare korte die.
ar nicer bfs code ta toke ekta node theke arekta node jawar minimum level print korbe, arjawa sombob na hole impssible print korbe(code credit: Sakib vai)


#include "bits/stdc++.h"
using namespace std;

#define SZ 110

bool matrix[SZ][SZ];
bool vis[SZ];
int dist[SZ];

queue <int> Q;

int BFS(int start, int end, int n)
{
    memset(vis, 0, sizeof(vis));
    memset(dist, -1, sizeof(dist));
    while(!Q.empty())
        Q.pop();

    vis[start] = 1;
    dist[start] = 0;
    Q.push(start);

    int i, u;

    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();

        for(i=1;i<=n;i++)
        {
            if(matrix[u][i] == 1 && vis[i] == 0)
            {
                vis[i] = 1;
                dist[i] = dist[u] + 1;
                Q.push(i);
            }
        }

    }

    return dist[end];
}

int main()
{
    int i, j, k, n, m;

    while(scanf("%d",&n) == 1)
    {
        scanf("%d",&m);

        memset(matrix, 0, sizeof(matrix));

        for(i=0; i<m; i++)
        {
            scanf("%d %d",&j,&k);
            matrix[j][k] = matrix[k][j] = 1;
        }

        scanf("%d",&m);

        while(m--)
        {
            scanf("%d %d",&j,&k);
            k = BFS(j, k, n);
            if(k == -1)
                printf("Impossible!\n");
            else
                printf("%d\n",k);
        }
    }

    return 0;
}

/*
9
9
 1 2
2 4
2 3
3 9
3 8
3 5
5 6
5 7
4 5
