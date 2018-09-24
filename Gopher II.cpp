#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>

using namespace std;

double bp[110][110];
int seen[110],match[110];
int maxbpm();
bool bpm(int u);
double gro[110][2];
double hole[110][2];
int n,m,s,v;
double tot;
int main()
{
    while(scanf("%d %d %d %d",&n,&m,&s,&v)==4)
    {
        tot=(double)(s*v);
       // printf("-->%lf\n",tot);
        for(int i=0;i<n;i++)
        {
            scanf("%lf %lf",&gro[i][0],&gro[i][1]);

        }
        for(int i=0;i<m;i++)
        {
            scanf("%lf %lf",&hole[i][0],&hole[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                double dest=sqrtf(((gro[i][0]-hole[j][0])*(gro[i][0]-hole[j][0]))+((gro[i][1]-hole[j][1])*(gro[i][1]-hole[j][1])));
               bp[i][j]=dest;
              // printf("%lf\n",dest);

            }
        }
        int res=maxbpm();
        printf("%d\n",n-res);
    }
    return 0;
}

int maxbpm()
{

    memset(match,-1,sizeof(match));
    int res=0;
    for(int u=0;u<n;u++)
    {

        memset(seen,0,sizeof(seen));
        if(bpm(u))
              res++;
    }
    return res;
}
bool bpm(int u)
{
    for(int v=0;v<m;v++)
    {
        if(bp[u][v]<=tot&&!seen[v])
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
