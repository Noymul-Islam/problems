#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<queue>
#define size 1500
using namespace std;
int bfs(int stI, int stJ, int EnI, int EnJ);
queue<int>Q;
int grid[size][size]={0};
int dist[size][size];

int x[]={0,0,-1,1};
int y[]={1,-1,0,0};

 int nx,ny,ix,iy,m,n;

int main()

{


    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0&&n==0)
          break;
          memset(grid,0,sizeof(grid));
          int bom;
          scanf("%d",&bom);
          for(int i=0;i<bom;i++)
          {
            int row,amount,col;
            scanf("%d %d",&row,&amount);

            for(int j=0;j<amount;j++)
            {
                int test;
                scanf("%d",&test);
                grid[row][test]=1;

            }


          }
        int stI,stJ,EnI,EnJ;

        scanf("%d %d",&stI,&stJ);
        scanf("%d %d",&EnI,&EnJ);
        int res;

        res=bfs(stI,stJ,EnI,EnJ);
        printf("%d\n",res);
    }
    return 0;
}
 int bfs(int stI,int stJ,int EnI, int EnJ)
 {

     while(!Q.empty())
       Q.pop();

       grid[stI][stJ]=1;
        dist[stI][stJ]=0;

        Q.push(stI);
        Q.push(stJ);
       while(!Q.empty())
      {

       nx=Q.front();
       Q.pop();
       ny=Q.front();
       Q.pop();
       for(int i=0;i<4;i++)
       {ix=nx+x[i];
       iy=ny+y[i];

       if(ix>=0&&iy>=0&&ix<m&&iy<n)
       {
           if(!grid[ix][iy])
           {
               Q.push(ix);
               Q.push(iy);
               grid[ix][iy]=1;
               dist[ix][iy]=dist[nx][ny]+1;


               if(ix==EnI && iy==EnJ)
                 break;
           }
       }

       }

      }
 // printf("%d %d\n",dist[ix][iy],dist[EnI][Enj]);
      return dist[EnI][EnJ];

 }
