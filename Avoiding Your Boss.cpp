#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int ar[110][110],next[110][110];
int n,r,bh,bo,mh,mm;

int main()
{
        while(scanf("%d %d %d %d %d",&n,&r,&bh,&bo,&mh,&mm)==5)
    {

        for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++)
            {ar[i][j]=1000000;
            ar[j][i]=1000000;
            if(i==j)
                 ar[i][j]=0;
                 next[i][j]=i;
                 next[j][i]=j;
                 }
        }
        for(int i=0;i<r;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            if(ar[u][v]>w)
            {
                ar[u][v]=w;
                ar[v][u]=w;

            }

        }
        for(int k=1;k<=n;k++)
        {
            //if(k==bo||k==bh)
              //    continue;
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++)
            {
                if(ar[i][j]>ar[i][k]+ar[k][j])
                {

                    ar[i][j]=ar[i][k]+ar[k][j];
                    next[i][j]=next[i][k];
                }
            }
        }
        int path=mh;
        int c=0;
        while(mh!=mm)
        {
            mh=next[mh][mm];
            if(mh==bo||mh==bh)
            {
                c++;
                break;
            }

        }
        if(c)
            printf("MISSION IMPOSSIBLE.\n");
        else
            printf("%d\n",ar[mh][mm]);

    }

    return 0;
}

