#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

void update(long long int  node, long long int  b, long long int  e, long long int  i, long long int  j, long long int  x);
 long long int  query(long long int node, long long int b, long long int e ,long long int i, long long int j,long long int carry);

long long int  ar[100010];
struct data
{
    long long int  sum,prop;
} tree[100010*4+10];
 int main()
{
    long long int  t,cs=1;
    //cin>>t;
    scanf("%lld",&t);
    while(t--)
    {
        //memset(tree,0,sizeof(tree));
        printf("Case %lld:\n",cs++);
       /* for(long long int i=0; i<=100010*4; i++)
        {
            tree[i].prop=0;
            tree[i].sum=0;
        }*/
       // memset(ar,0,sizeof(ar));
        long long int  n,q;
        //cin>>n>>q;
            scanf("%lld %lld",&n,&q);
          for(long long int i=0; i<=n*4; i++)
        {
            tree[i].prop=0;
            tree[i].sum=0;
        }

        while(q--)
     {

        long long int a,x,y,v;

        //cin>>a;
        scanf("%lld",&a);
        if(!a)
        {
            //cin>>x>>y>>v;
            scanf("%lld %lld %lld",&x,&y,&v);
            update(1,1,n,x+1,y+1,v);


        }
        else
        {
            long long int x,y;
            //cin>>x>>y;
            scanf("%lld %lld",&x,&y);
            long  long int res=query(1,1,n,x+1,y+1,0);
            printf("%lld\n",res);

        }


    }
    }

    return 0;
}

void update(long long int node, long long int b, long long int e,long long int i,long long int j,long long int x)
{
    if(i>e||j<b)
        return ;
    if(b>=i&&e<=j)
    {
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }
    long long int left=node*2;
    long long int right=node*2+1;
    long long int mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum = tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;

}
long long int query(long long int node,long long int b,long long int e,long long int i,long long int j,long long int carry)
{

    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
    {
        return tree[node].sum+carry*(e-b+1);

    }

    long long int left=node<<1;
    long long int right=(node<<1)+1;
    long long int mid=(b+e)>>1;
    long long int p1=query(left,b,mid,i,j,tree[node].prop+carry);
    long  long int p2=query(right,mid+1,e,i,j,tree[node].prop+carry);

    return p1+p2;

}
