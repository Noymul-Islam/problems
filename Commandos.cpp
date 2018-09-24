#include<cstdio>
#include<iostream>

using  namespace std;

int ar[110][110];

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
        {
            if(i==j)
            {ar[i][j]=0;

            }
            else
            {
                ar[i][j]=1000000;
                ar[j][i]=1000000;

            }

        }
        while(r--)
        {
            int u,v;
            cin>>u>>v;
            ar[u][v]=1;
            ar[v][u]=1;

        }
        for(int k=0;k<n;k++)
            for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
        {

            if(ar[i][j]>ar[i][k]+ar[k][j])
            {
                ar[i][j]=ar[i][k]+ar[k][j];
            }
        }
        int s,d;
        cin>>s>>d;
        int tot=-1;
        for(int i=0;i<n;i++)
        {
            tot=max(tot,ar[s][i]+ar[i][d]);

        }
        printf("Case %d: %d\n",cs++,tot);
    }
    return 0;
}
