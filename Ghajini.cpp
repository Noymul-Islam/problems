#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>


using namespace std;
#define size 100020
 int ar[size];
 struct data
 {
   int maxi;
   int mini;
 }tree[size*4],temp;;
void init(int node ,int b,int e);
void update(int node ,int b, int e, int i, int newvalue);
 data  query(int node , int b, int e,int i ,int j);

int main()
{
    int cases=1,t;
    scanf("%d",&t);
    while(t--)
    {
        memset(tree,0,sizeof(tree));
        int n,d;
        scanf("%d %d",&n,&d);

        for(int i=1;i<=n;i++)
           scanf("%d",&ar[i]);
           init(1,1,n);
           //printf("%d\n",tree[1].maxi);
           int maxix=-1;
           for(int i=1;i<=n-d+1;i++)
           {
              data res=query(1,1,n,i,i+d-1);

                if(abs(res.maxi-res.mini)>maxix)
                {
                    maxix=res.maxi-res.mini;
                   // printf("%d\n",maxix);
                }


           }
        printf("Case %d: %d\n",cases++,maxix);

    }

    return 0;
}
void init(int node ,int b,int e)
{
    if(b==e)
    {
        tree[node].maxi=ar[b];
        tree[node].mini=ar[b];
        return ;
    }

    int left=node*2;
     int right =left+1;
     int mid=(b+e)/2;
     init(left,b,mid);
     init (right,mid+1,e);
     tree[node].maxi=max(tree[left].maxi,tree[right].maxi);

     tree[node].mini=min(tree[left].mini,tree[right].mini);
}
data query(int node,int b, int e, int i,int j)
{
    if(i>e||j<b)
    {
      data p4;
      p4.maxi= -1;
      p4.mini=999999999;

        return p4;

    }
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    data p1=query(left,b,mid,i,j);
    data p2=query(right,mid+1,e,i,j);
    data p3;
    p3.maxi=max(p1.maxi,p2.maxi);
    p3.mini=min(p1.mini,p2.mini);
    return  p3;

}
