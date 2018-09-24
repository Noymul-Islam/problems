#include<iostream>
#include<queue>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
struct edge
{
	int u,v;
	double w;
	bool operator < ( const edge& p ) const
	{
		return w < p.w;
	}
};
int pr[1500];
void makeset(int n){
	pr[n]=n; //at first every element is parent of itself.
}
vector<edge>e;
int find(int r)
{
   return (pr[r]==r) ? r:  find(pr[r]);
}
void Union(int a,int b)
{
	int u=find(a);
	int v=find(b);
	if(u!=v)
	{
		pr[u]=v;
	}
}
double mst(int n)
{
	sort(e.begin(),e.end());
	for(int i=1;i<=n;i++)pr[i]=i;
	int count=0;
	double s=0.0;
	for(int i=0;i<(int)e.size();i++)
	{
		int u=find(e[i].u);
		int v=find(e[i].v);
		if(u!=v)
		{
			pr[u]=v;
			count++;
			s+=e[i].w;
			if(count==n-1) break;
		}
	}
	return s;
}
double coord[1500][3];
int main()
{
	int n,m,st,end,t;
	scanf("%d",&t);
	for(int cs=1;cs<=t;cs++)
	{
	    scanf("%d",&n);
	    memset(pr,0,sizeof(pr));
	m=n;
	for(int i=1;i<=m;i++)
	{
        scanf("%lf %lf",&coord[i][0],&coord[i][1]);
	}
		int u,v;
		double w;
	for(int i=1;i<n;i++)
	for(int j=i+1;j<n+1;j++)
        {
         w=sqrt(((coord[i][0]-coord[j][0])*(coord[i][0]-coord[j][0])) + ((coord[i][1]-coord[j][1]) * (coord[i][1]-coord[j][1])));
        edge get;
		get.u=i; get.v=j; get.w=w;
		e.push_back(get);
        }
	double ans;
	ans=mst(n);
	printf("%.2lf\n",ans);
	if(cs!=t)
	printf("\n");
	e.clear();
	}
	return 0;
}

