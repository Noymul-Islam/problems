#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int par[210];
int ar[210][210],ar2[210][210];
struct data
{

    int u,v,w;
};
bool comp(data p, data q)
{

    return p.w>q.w;
}
void mst(int n);
int fid(int r);
void floyed();
vector<data>e;
int n,ed;

int main()
{
    map<string,int>mp;

     int cs=1;
    while(scanf("%d %d",&n,&ed)&&(n!=0&&ed!=0))
    {
           //getchar();
        int num=1;
        char s1[100],s2[100];
       /* for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                ar[i][j]=100000000;
                //if(i==j)
                    //ar[i][j]=0;
            }*/
        for(int i=0; i<ed; i++)
        {


            int w;
    scanf("%s %s %d",s1,s2,&w);
            if(mp.find(s1)==mp.end())
            {

                mp[s1]=num++;
               //printf("-->%d\n",mp[s1]);
            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2]=num++;

            }
            data get;
            get.u=mp[s1];
            get.v=mp[s2];
            //printf("-->%d",mp[s1]);
            get.w=w;
            e.push_back(get);

        }
        char s3[100],s4[100];
        cin>>s3>>s4;
        mst(n);
        floyed();
        //char s1[100],s2[100];

        //printf("%d %d\n",mp[s3],mp[s4]);
        printf("Scenario #%d\n%d tons\n\n",cs++,ar[mp[s3]][mp[s4]]);


        e.clear();
        mp.clear();
        //clear(ar);
  memset(ar,0,sizeof(ar));


    }

    return 0;
}
int fid(int r )
{
    if(par[r]==r)
        return r;
    else
        return par[r]=fid(par[r]);


}
void mst(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
    sort(e.begin(),e.end(),comp);
    int count=0;
    for(int i=0; i<(int)e.size(); i++)
    {
        int u=fid(e[i].u);
        int v=fid(e[i].v);
        if(u!=v)
        {
            ar[e[i].u][e[i].v]=ar[e[i].v][e[i].u]=e[i].w;
            par[fid(u)]=fid(v);
            count++;
            if(count==n-1)
                break;

        }

    }


}
void floyed()
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=n; j++)
            {
                //if(i==j)
                   // continue;
               // if(ar[i][j]>ar[i][k]+ar[k][j])
                //{/
                    // ar2[i][j]=min(ar[i][k],ar[k][j]);
                    ar[i][j]=max(ar[i][j],min(ar[i][k],ar[k][j]));


                //}

            }
        }
    }
    /*for(int i=1;i<=n;i++)
          {for(int j=1;j<=n;j++)
            {printf("%d ",ar[i][j]);}
    printf("\n");}*/
}
