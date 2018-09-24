#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

struct data
{
    int u,v,w;

};
vector<data>e;
bool comp(data p, data q)
{
    return p.w<q.w;
}
int mst(int n);
int find(int r);
int ar[1000];
int par[10010];
int a,b,c,d,dist1,dist2,dist3,dist4,res,u,v,w,x,n;
int track[10010];
int num;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int num=0;
        cin>>n;
        ar[0]=0;
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        data get;
        for(int i=0; i<n; i++)
        {
            d=ar[i]%10;
            c=(ar[i]%100)/10;
            b=(ar[i]/100)%10;
            a=ar[i]/1000;
            for(int j=i+1; j<=n; j++)
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

                get.u=i;
                get.v=j;
                get.w=res;
                e.push_back(get);
            }
        }

        int ans=mst(n);
        printf("%d\n",ans);
        e.clear();

    }

    return 0;
}
int mst(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
    int count=0,s=0;
    sort(e.begin(),e.end(),comp);

    for(int i=0; i<e.size(); i++)
    {
        if(e[i].w)

        int u=find(e[i].u);
        int v=find(e[i].v);

        if(u!=v)
        {
            par[v]=u;
            count++;
            s=s+e[i].w;
            if(count==n)
                return s;

        }


    }

}
int find(int r)
{
    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);

}
