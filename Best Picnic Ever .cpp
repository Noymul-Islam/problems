    #include<cstdio>
    #include<iostream>
    #include<cstring>
    #include<cmath>
    #include<queue>
    #include<vector>
    #include<algorithm>
    using namespace std;
    void dfs(int i);
    int ar[1201];
    int city[1201][1201];
    int color[1201];
        int k,n,m,t;
    int main()
    {

        int cs=1;
        cin>>t;
        while(t--)
        {
             cin>>k>>n>>m;
             int man[k+1];
             for(int i=1;i<=k;i++)
            {
                 cin>>man[i];
    //             ar[man[i]]=1;


             }
             for(int i=0;i<m;i++)
             {
                 int u,v;
                 cin>>u>>v;
                  city[u][v]=1;

             }
             for(int i=1;i<=k;i++)
             {
                 memset(color,0,sizeof(color));
                 //color[man[i]] = 1;
                 dfs(man[i]);
             }
          //   sort(ar,ar+n);
             int c=0;
             for(int i=1;i<=n;i++)
             {
                 //printf("%d\n",ar[i]);
                  if(ar[i]==k)
                   c++;
                 //else
                   // break;
             }
             printf("Case %d: %d\n",cs++,c);

        memset(ar,0,sizeof(ar));
        memset(city,0,sizeof(city));

        }

        return 0;
    }


    void dfs(int i)
    {
        if(color[i]!=0)
        return;
        color[i]=1;
        ar[i]++;

        for(int j=1;j<=n;j++)
        {
           //printf("111\n");

            if(city[i][j]==1)//&&(color[j]==0))
            {
    //            color[j]=1;
    //            ar[j]++;
                dfs(j);

            }

        }

    }

