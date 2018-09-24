#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct data
{
    long long int u,v,w;
    data(long long int a,long long int b, long long int c)
    {
        u=a;
        v=b;
        w=c;

    }
    bool operator<(const data &p)const
    {
       return  p.w<w;

    }

};
priority_queue<data>q;
vector<long long int>grid[700],cost[700];
long long int a,b,c,d,dist1,dist2,dist3,dist4,res,u,v,w,x,n,cop,taken[501],cat;
long long int mst(long long int start, long long int n);

 int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+1];
        ar[0]=0;
        for(long long int i=1;i<=n;i++)
              cin>>ar[i];

        for(long long int i=0;i<n;i++)
        { d=ar[i]%10;
            c=(ar[i]%100)/10;
            b=(ar[i]/100)%10;
            a=ar[i]/1000;

          for(long long int j=i+1;j<=n;j++)
          {

              x=ar[j]%10;
                w=(ar[j]%100)/10;
                v=(ar[j]/100)%10;
                u=(ar[j])/1000;
                dist1=abs(a-u);
                if(dist1>5)
                    dist1=10-dist1;
                dist2=abs(b-v);
                if(dist2>5)
                    dist2=10-dist2;
                dist3=abs(c-w);
                if(dist3>5)
                    dist3=10-dist3;
                dist4=abs(d-x);
                if(dist4>5)
                    dist4=10-dist4;

                res=dist1+dist2+dist3+dist4;
                grid[i].push_back(j);
                grid[j].push_back(i);
                cost[i].push_back(res);
                cost[j].push_back(res);
          }


        }
        cop=99999999999999999;
        //prlong long intf("99");
        long long int ans=mst(0,n+1);
        //prlong long intf("lol");
        printf("%lld\n",ans);
        for(long long int i=0;i<=n+1;i++)
        {
            grid[i].clear();
            cost[i].clear();
        }

    }
    return 0;
}
long long int mst(long long int start, long long int n)
{
    while(!q.empty())
         q.pop();
    long long int sum=0,con=0;
    for(long long int i=0;i<=n;i++)
           taken[i]=0;

//prlong long intf("55");
    for(long long int i=0;i<grid[start].size();i++)
    {
              if(cost[start][i]<cop)
              {
                  cop=cost[start][i];
                  cat=grid[start][i];
              }
        //q.push(data(start,grid[start][i],cost[start][i]));
    }
    q.push(data(start,cat,cop));
   // prlong long intf("-->%lld %lld %lld\n",start,cat,cop);
    taken[start]=1;
    //prlong long intf("222");
    while(!q.empty())
    {
        data top=q.top();
        q.pop();
        long long int u=top.u;
        long long int v=top.v;

        if(taken[v]==1)
               continue;
         //if ((u==0||v==0)&&cop==1)
           //    continue;
         taken[v]=1;
         //prlong long intf("2525");
         con++;
         sum=sum+top.w;
         if(con==n-1)
             return sum;
             //prlong long intf("lolo");
         for(long long int i=0;i<(long long int)grid[v].size();i++)
         {
             q.push(data(v,grid[v][i],cost[v][i]));
         }
        // prlong long intf("popo");
         //cop=1;
    }

}
