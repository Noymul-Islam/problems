
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define sz 200010
int par[sz],sum[sz];
int find (int n)
{
    if (par[n]==n)
    return n;
    else
    return (par[n]=find(par[n]));
}
int main()
{
  //  freopen("cat.txt","w",stdout);
    map < string , int > mm;
    int t;
    scanf("%d",&t);
    int i;
    for (i=0;i<t;++i)
    {
        int k;
        int e,assign=0;
        scanf("%d",&e);
        for (k=0;k<2*e;++k)
        {
            par[k]=k;
            sum[k]=1;
        }
        int j;
        for (j=0;j<e;++j)
        {
            string s1,s2;
            cin >> s1 >> s2;
            if (mm.find(s1)==mm.end())
            {
                mm[s1]=assign;
                ++assign;
            }
            if (mm.find(s2)==mm.end())
            {
                mm[s2]=assign;
                ++assign;
            }
            int x,y;
            x=find(mm[s1]);
            y=find(mm[s2]);
            if (x!=y)
            {
                par[x]=y;
                sum[y]=sum[y]+sum[x];
            }
            printf("%d\n",sum[y]);
        }
        mm.clear();
    }
    return 0;
}
