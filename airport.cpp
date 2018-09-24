#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

void mst(int n);
int find(int r);
 int t, n,m,a,k;
struct edge
{
    int u,v,w;
    bool operator< (const edge&p) const
    {
        return w<p.w;

    }

};

vector<edge>e;

int par[100002];
//bool comp(  edge p, edge q)
//{
  //  return (p.w<q.w);
        // return p;
    //else
        // return q;
//}
    int find(int r)
    {
        if(par[r]==r)
              return r;
        else
           return  par[r]=find(par[r]);

    }
void mst(int n)
{
    int number =n;
     int u,v;
 for(int i=0;i<100002;i++)
      par[i]=i;
 int count=0 ,s=0;
 sort(e.begin(),e.end());

 for(int i=0;i<(int)e.size();i++)
 {
      //printf("%d\n",e[i].w);
     u=find(e[i].u);
     v=find(e[i].v);

     if(u!=v)
     {
         par[find(u)]=find(v);
        count++;
        if(e[i].w<a)
        {
            s=s+e[i].w;
            number--;
            }
        if(count==n-1)
               break;
     }
     }

     printf("Case #%d: %d %d\n",k++,(s+(number*a)),number);

 }
int main()
{

    scanf("%d",&t);
    k=1;
    while(t--)
    {

        scanf("%d %d %d",&n,&m,&a);

        for(int i=0;i<m;i++)
        {
            edge data;
            int x,y,c;
            scanf("%d %d %d",&x,&y,&c);

            data.u=x;
            data.v=y;
            data.w=c;

            e.push_back(data);
        }
 mst(n);
 e.clear();

    }


    return 0;
}
