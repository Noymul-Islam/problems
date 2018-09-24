#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
struct data
{
    int time ,dist;
} ar[1000][1000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        for(int  i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                ar[i][j].time=10000000;
                ar[i][j].dist=10000000;
                ar[j][i].time=10000000;
                ar[j][i].dist=10000000;
                if(i==j)
                {
                    ar[i][j].time=0;
                    ar[i][j].dist=0;
                }
            }
        while(r--)
        {
            int u,v,time,dist;
            cin>>u>>v>>time>>dist;

            if(ar[u][v].time>time)
            {ar[u][v].time=time;
            ar[u][v].dist=dist;
            ar[v][u].time=time;
            ar[v][u].dist=dist;}
            else if(ar[u][v].time==time&&ar[u][v].dist>dist)
            {
            ar[u][v].time=time;
            ar[u][v].dist=dist;
            ar[v][u].time=time;
            ar[v][u].dist=dist;


            }

        }
        for(int k=1; k<=n; k++)
            for(int i=1; i<=n; i++)
                for(int j=1; j<=n; j++)
                {
                    if(ar[i][j].time>ar[i][k].time+ar[k][j].time)
                    {

                        ar[i][j].time=ar[i][k].time+ar[k][j].time;
                        ar[i][j].dist=ar[i][k].dist+ar[k][j].dist;
                    }
                    else if(ar[i][j].time==ar[i][k].time+ar[k][j].time)
                    {
                        if(ar[i][j].dist>ar[i][k].dist+ar[k][j].dist)
                        {

                            ar[i][j].dist=ar[i][k].dist+ar[k][j].dist;
                            //ar[i][j].time=ar[i][k].time+ar[k][j].time;
                        }

                    }

                }
        int q;
        cin>>q;
        while(q--)
        {
            int u,v;
            cin>>u>>v;
            if(ar[u][v].time==10000000)
                printf("No Path.\n");
            else
                printf("Distance and time to reach destination is %d & %d.\n",ar[u][v].dist,ar[u][v].time);

        }


        if(t)
            printf("\n");

    }
    return 0;
}
