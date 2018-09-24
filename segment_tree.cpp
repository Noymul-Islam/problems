#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

#define max 100001

void init (int node,int b,int e);
int query(int  node,int b, int e,int i, int j);
void update(int node,int b,int e,int i,int newvalue);
int array[max];
int tree[max*3];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&array[i]);
    init(1,1,n);
    update(1,1,n,2,0);
    cout<<query(1,1,n,1,3)<<endl;
    update(1,1,n,2,2);
    cout<<query<<(1,1,n,2,2)<<endl;



    return 0;
}
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=array[b];
        return ;


    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[left]+ tree[right];



}
int query(int node,int b, int e, int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;

}
void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<e)
        return ;
    if(b>=i&&e<=i)
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
