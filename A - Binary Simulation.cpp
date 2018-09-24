#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
#include<stack>

using namespace std;

int ar[100010];
struct data
{
  int sum,prop;

} tree[4*100010];
void init(int node, int b ,int e);
void update(int node ,int b,int e,int i,int j,int x);
int query(int node,int b,int e,int i,int j,int carry);
int n;
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    //getchar();
    int coun=0;
    while(t--)
    {

        char ch[1000000];
        getchar();
         gets(ch);
      n=strlen(ch);
      printf("Case %d:\n",cs++);
      int k=1;
      for(int i=0;i<n;i++)
      {
          ar[k++]=ch[i]-'\0';



      }
      for(int i=1;i<=n*4+10;i++)
             {tree[i].prop=0;
                tree[i].sum=0;
             }
             //printf("-->%d\n\n",coun++);
      init(1,1,n);
      int q;
      //cin>>q;
        scanf("%d",&q);
        char s[10];
      while(q--)
      {
          scanf("%s",s);
          if(s[0]=='I')
          {
              int a,b;
              scanf("%d %d",&a,&b);
              update(1,1,n,a,b,1);

          }
          else if(s[0]=='Q')
          {
              int a;
              scanf("%d",&a);

              int res=query(1,1,n,a,a,0);

                 //printf("%d\n",)
                 if(res%2==0)
                            printf("0\n");
                 else
                     printf("1\n");

          }

      }



    }

return 0;
}

void init(int node ,int b,int e)
{

    if(b==e)
    {

        tree[node].sum=ar[b];
         return ;
    }
    int left=2*node;
    int right=left+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);

    tree[node].sum=tree[left].sum+tree[right].sum;


}
void update(int node ,int b,int e,int i,int j,int x)
{
    if(i>e||j<b)
         return ;
    if(b>=i&&e<=j)
    {
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }
       int left=node*2;
     int right=node*2+1;
     int mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum = tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;

}

int query(int node,int b,int e,int i,int j,int carry)
{
    if(i>e||j<b)
          return 0;
    if(b>=i&&e<=j)
    {
        return tree[node].sum+carry*(e-b+1);
    }


    int left=node<<1;
     int right=(node<<1)+1;
int mid=(b+e)>>1;
    int p1=query(left,b,mid,i,j,tree[node].prop+carry);
int p2=query(right,mid+1,e,i,j,tree[node].prop+carry);

    return p1+p2;

}
