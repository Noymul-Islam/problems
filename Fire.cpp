#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;
int bfj(int i, int j);
void bff(int i, int j);
int dist[1500][1500];
int grid[1500][1500];
int tot[1500][1500];
char ch[1500][1500];
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
int r,c;
int fire[1500][1500];
//int put[1500][2];
int main()
{
    int t;
    cin>>t;
    // getchar();
    while(t--)
    {
        int take=0;
        //memset(grid,0,sizeof(grid));
            //while(!put.empty())
                // put.pop();
        cin>>r>>c;
        getchar();
        int fx,fy,jx,jy,l=0;
        for(int i=0; i<r; i++)
        {
            gets(ch[i]);
            int len=strlen(ch[i]);
            for(int j=0;j<len;j++)
            {
                tot[i][j]=10000000;
                grid[i][j]=0;
                fire[i][j]=0;
                if(ch[i][j]=='#')
                      grid[i][j]=1;
                      if(ch[i][j]=='F')
                      {
                          //put[take][0]=i;
                          //put[take++][1]=j;
                          fx=i;
                          fy=j;
                          l++;
                      }
                      if(ch[i][j]=='J')
                      {
                          jx=i;
                          jy=j;

                      }
            }

        }


            //for(int z=0;z<take;z++)
            //{

                //fx=put.front();
                //put.pop();
                //fy=put.front();
                //put.pop();
                if(l)
                bff(fx,fy);

            //}

        //bff(fx,fy);
        //memset(grid,0,sizeof(grid));

        /*for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
        {
            if(ch[i][j]=='#')
                grid[i][j]=1;
            else
                grid[i][j]=0;

        }*/
        int res= bfj(jx,jy);
        if(res==-1)
            printf("IMPOSSIBLE\n");
        else
            printf("%d\n",++res);

    }
    return 0;
}

void bff(int i, int j)
{
    queue<int>q;
    grid[i][j]=1;
    dist[i][j]=0;
    tot[i][j]=0;
    q.push(i);
    q.push(j);
    fire[i][j]=1;
    //printf("1");
    while(!q.empty())
    {

        int nx=q.front();
        q.pop();
        int ny=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int fx=nx+x[k];
            int fy=ny+y[k];

            if(fx>=0&&fy>=0&&fx<r&&fy<c)
            {
                if((!grid[fx][fy]||(grid[fx][fy]==1&&(tot[fx][fy]>dist[nx][ny]+1)))&&ch[fx][fy]!='#')
                {
                    if(ch[fx][fy]=='F'&&!fire[fx][fy])
                    {
                        grid[fx][fy]=1;
                        dist[fx][fy]=0;
                        tot[fy][fx]=0;
                        q.push(fx);
                        q.push(fy);
                        fire[fx][fy]=1;
                    }
                    else if(ch[fx][fy]!='F')
                    {

                     q.push(fx);
                    q.push(fy);
                    grid[fx][fy]=1;
                    dist[fx][fy]=dist[nx][ny]+1;
                    //if
                    tot[fx][fy]=dist[fx][fy];}
                }

            }

        }

    }

}
int bfj(int i,int j)
{
    if(i==0||j==0||i==r-1||j==c-1)
        return 0;
    queue<int>q;
        grid[i][j]=1;
    dist[i][j]=0;
    tot[i][j]=0;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
        int nx=q.front();
        q.pop();
        int ny=q.front();
        q.pop();
        for(int k=0; k<4; k++)
        {
            int jx=nx+x[k];
            int jy=ny+y[k];
            if(jx>=0&&jy>=0&&jx<r&&jy<c)
            {
               // if(!grid[jx][jy])
                if((!grid[jx][jy]||(grid[jx][jy]==1&&(tot[jx][jy]>dist[nx][ny]+1)))&&ch[jx][jy]!='#')
                {
                    grid[jx][jy]=1;
                    dist[jx][jy]=dist[nx][ny]+1;
                    //if(tot[jx][jy]>dist[jx][jy])
                    //{

                        tot[jx][jy]=dist[jx][jy];
                                    q.push(jx);
                        q.push(jy);
                        if(jx==0||jy==0||jx==r-1||jy==c-1)
                            return dist[jx][jy];
                    //}

                }

            }
        }
    }
    return -1;

}
