#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>


using namespace std;
#define max 100020
 int ar[max];
 int tree[max*4];
void init(int node ,int b,int e);
void update(int node ,int b, int e, int i, int newvalue);
int query(int node , int b, int e,int i ,int j);

int main()
{

     int t,cases=1;
     scanf("%d",&t);
     while(t--)
     {


         int n,q;
         scanf("%d %d",&n,&q);
       //ar[n];
         for(int i=1;i<=n;i++)
           scanf("%d",&ar[i]);
                    printf("Case %d:\n",cases++);
                    init(1,1,n);
           while(q--)
           {

               int number;
                scanf("%d",&number);

                if(number==1)
                {
                     int index;
                     scanf("%d",&index);
                     printf("%d\n",ar[index+1]);
                     ar[index+1]=0;
                     update(1,1,n,index+1,0);

                }
                else if(number==2)
                {
                      int i,newvalue;
                      scanf("%d %d",&i,&newvalue);
                      newvalue=newvalue+ar[i+1];
                      ar[i+1] = newvalue;
                      update(1,1,n,i+1,newvalue);

                }
                else if(number==3)
                {
                    int i,j;
                     scanf("%d %d",&i,&j);

                    int res=query(1,1,n,i+1,j+1);
                    printf("%d\n",res);

                }

           }

     }

    return 0;
}

void init(int node ,int b,int e)
{
    if(b==e)
    {
        tree[node]=ar[b];
        return ;
    }

    int left=node*2;
     int right =left+1;
     int mid=(b+e)/2;
     init(left,b,mid);
     init (right,mid+1,e);
     tree[node]=tree[left]+tree[right];
}



void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b)
        return ;
    if(b==e)
    {
        tree[node]=newvalue;
        return;

    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];



}
int query(int node,int b, int e, int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;

}
