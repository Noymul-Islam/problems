
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;

int par[1100];
int find(int r);
int mst(int n);
int Mst(int n);
struct data
{
    int u,v,w;
} ;
struct track
{
    int u, v,flag;
}test[1100];
int p,n,ed;
bool comp(data p,data q)
{
    return p.w<q.w;
}
vector<data>e;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>ed;
        //track test[1100];
        int ar[1100],z=-1;
        int edge=0;
        for(int i=0; i<ed; i++)
        {
            data get;
            int u,v,w;
            cin>>u>>v>>w;
            if(u==v)
                continue;
            get.u=u;
            get.v=v;
            get.w=w;
            e.push_back(get);
            edge++;
        }
         p=0;
        int res=mst(n);


            p=0;
            for(int i=0; i<n-1; i++)
            {
                test[p].flag=0;
               // printf("%-->d %d %d\n",test[p].u,test[p].v,test[p].flag);
                int res1=Mst(n);
             // printf("-->%d\n",res1);
                ar[++z]=res1;
                //test[p].flag=1;
                p++;
            }
            sort(ar,ar+z+1);


                printf("%d %d\n",res,ar[0]);



        e.clear();


    }

    return 0;
}
int mst(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
    sort(e.begin(),e.end(),comp);
    int count=0,s=0;
    for(int i=0; i<(int )e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            test[p].u=e[i].u;
            test[p].v=e[i].v;
            test[p++].flag=1;
            par[find(u)]=find(v);
            count++;
            s=s+e[i].w;
            if(count==n-1)
                return s;

        }

    }
    //return count;
}
int find(int r)

{
    if(par[r]==r)
        return r;
    else
        return par[r]=find(par[r]);


}
int Mst(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
    sort(e.begin(),e.end(),comp);
    int count=0,s=0;

    for(int i=0; i<(int)e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            if(e[i].u==test[p].u&&e[i].v==test[p].v&&test[p].flag==0)
                {

                    test[p].flag=1;

                    continue;
                }

            s+=e[i].w;
            par[find(u)]=find(v);
            count++;
            if(count==n-1)
                {

                    return s;}

        }


    }

    return 100000000;

}
