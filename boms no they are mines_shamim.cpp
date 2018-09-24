#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#define SZ 1550
using namespace std;
queue<int>Q;
int colour[SZ];
int grid[SZ][SZ]={0};
int dist[SZ][SZ];
int x[]= {0,0,-1,1};
int y[]= {1,-1,0,0};
int nx,ny,ix,iy;
int m,n;
int BFS(int sti,int stj, int edi, int edj)
{


    while(!Q.empty())
        Q.pop();
//    vis[start] = 1;
grid[sti][stj]=1;
  dist[sti][stj] = 0;
    Q.push(sti);
    Q.push(stj);
    int i, u;
    while(!Q.empty())
    {

        nx = Q.front();
        Q.pop();
        ny=Q.front();
        Q.pop();
        for(i=0; i<4; i++)
        {
            ix=nx+x[i];
            iy=ny+y[i];
            if(ix<m && iy<n && ix>=0 && iy>=0)
            {
                if(!grid[ix][iy])
                    {
                        Q.push(ix);
                        Q.push(iy);
                        grid[ix][iy]=1;
                        dist[ix][iy]=dist[nx][ny]+1;
                        if(ix==edi && iy == edj) break;
                    }
            }
        }
    }
    return dist[edi][edj];
}
int main()
{
    int bom,temp,number,t2;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0 && n==0)
        break;
        memset(grid, 0, sizeof(grid));
        scanf("%d",&bom);
        for(int i=0;i<bom;i++)
        {
            scanf("%d %d",&temp,&number);
            for(int j=0;j<number;j++)
            {scanf("%d",&t2);
            grid[temp][t2]=1;
            }

        }
        int st1,st2,f1,f2;
        scanf("%d %d",&st1,&st2);
        scanf("%d %d",&f1,&f2);
        int ans;
        ans=BFS(st1,st2,f1,f2);
        printf("%d\n",ans);
//for(int i=0;i<m;i++)
//{
//    for(int j=0;j<n;j++)
//    printf("%d",dist[i][j]);
//    printf("\n");
//}
    }
    return 0;
}
