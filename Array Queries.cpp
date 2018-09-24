#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

#define max 100005

int arr[max];
int tree[max*4];
void update(int node ,int b,int e,int i,int newvalue);
 int query(int node,int b,int e,int i,int j);
  void init(int node ,int b,int e);
int main()
{

int t,cases=1;
   scanf("%d",&t);
   while(t--)
   {

       int n,que;
        memset(arr,0,sizeof(arr));
         memset(tree,0,sizeof(tree));
        scanf("%d %d",&n,&que);
        for(int i=1;i<=n;i++)
           {scanf("%d",&arr[i]);

           }
           init(1,1,n);
           //for(int i=1;i<=9;i++)
            //printf("%d\n",tree[i]);
    printf("Case %d:\n",cases++);
      for(int i=0;i<que;i++)
     {
         int a,b;
           scanf("%d %d",&a,&b);
            int res=query(1,1,n,a,b);
        printf("%d\n",res);
     }

   }


    return 0;
}

void init(int node ,int b ,int e)
{
   //printf("%d\n",node);
  if(b==e)
  {
      tree[node]=arr[b];
       return ;

  }
int left= 2*node;
 int right=2*node +1;
 int mid=(b+e)/2;
 init(left,b,mid);
  init(right,mid+1,e);
  tree[node]=min(tree[left],tree[right]);

}

int query(int node ,int b ,int e, int i, int j)
{
    if(i>e||j<b)
      return 10000000;
    if(b>=i&&e<=j)
      return tree[node];

        int left=2*node;
         int right =left+1;

       int   mid=(b+e)/2;
         int p1=query(left,b,mid,i,j);
         int p2=query(right,mid+1,e,i,j);

     return  min(p1,p2);

}
