#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int bp[500][500],match[500],seen[500];
bool bpm(int u);
int maxbpm();
int bolts,nuts;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>bolts>>nuts;

        for(int i=0;i<bolts;i++)
        {

            for(int j=0;j<nuts;j++)
            {
                cin>>bp[i][j];
            }
        }
        int res=maxbpm();
        printf("Case %d: a maximum of %d nuts and bolts can be fitted together\n",cs++,res);
    }
    return 0;
}

int maxbpm()
{
    memset(match,-1,sizeof(match));
    int res=0;
    for(int u=0;u<bolts;u++)
    {
        memset(seen,0,sizeof(seen));
        if(bpm(u))
              res++;
    }
    return res;
}
bool bpm(int u)
{

    for(int v=0;v<nuts;v++)
    {
       if(bp[u][v]&&!seen[v])
       {
           seen[v]=1;
            if(match[v]<0||bpm(match[v]))
            {
                match[v]=u;
                return true;
            }
       }

    }
    return false;
}
