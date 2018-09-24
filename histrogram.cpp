#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>

using namespace std;

void init(int node,int b,int e);
int query(int node,int b,int en);
int func(int start,int end);
int s,e,n;
int ar[30010];
int tree[30010*4];
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
              cin>>ar[i];
        init(1,1,n);
        //printf("ok");
        printf("Case %d: %d\n",cs++,func(1,n));

    }

    return 0;
}

void init(int node,int b,int e)
{
    //printf("ok");
    if(b==e)
    {
        tree[node]=b;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    if(ar[tree[left]]>ar[tree[right]])
        tree[node]=tree[right];
    else
        tree[node]=tree[left];


}
int func(int start,int end)
{
   // printf("ok");
    s=start,e=end;
    int left=0,right=0,mx;
    int mid=query(1,1,n);
    if(mid-1>=start)
        left=func(start,mid-1);
    if(mid+1<=end)
        right=func(mid+1,end);

    mx=ar[mid]*(end-start+1);
    mx=max(mx,max(left,right));
    return mx;



}

int query(int node ,int b, int en)
{
    //printf("np");
    if(b>=s&&en<=e)
         return tree[node];
    int left=node*2;
    int right =left+1;
    int mid=(b+en)/2;
    int min1,min2;
    if(mid>=s)
    {
        min1=query(left,b,mid);
        if(mid+1<=e)
        {
            min2=query(right,mid+1,en);

        if(ar[min1]>ar[min2])
            min1=min2;
        }
    }
    else
        min1=query(right,mid+1,en);
    return min1;

}
