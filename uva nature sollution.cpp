#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <map>
#include <string>
#define N  50000
using namespace std;
int par[N];
int find(int a)
{
    if(par[a]==a)   return a;
    return par[a]=find(par[a]);
}
void Union(int a,int b)
{
    if(find(a)!=find(b))    par[find(b)]=find(a);
}
int main()
{
    int n,m;
    int CASE=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==0&&n==0)  return 0;
        map<string,int>mp;
        string s;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            mp[s]=i;
            par[i]=i;
        }
        for(int i=0;i<m;i++)
        {
            string x,y;
            cin>>x>>y;
            int a=mp[x],b=mp[y];
            if(a>b) swap(a,b);

            Union(a,b);
        }
        int max=0,arr[N];
        memset(arr,0,sizeof(arr));
        for(int i=1;i<=n;i++)
        {
            int k=find(i);
            arr[k]++;
            if(max<arr[k])  max=arr[k];
        }
        cout<<max<<endl;
    }
}


