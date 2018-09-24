#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std ;

struct data
{
    int value,mod,track;

}ar[10005];
bool comp(data p, data q)
{
    if(p.mod==q.mod)
    {
        if(p.value%2!=0&&q.value%2!=0)
        {
            return p.value>q.value;

        }
        else if(p.value%2==0&&q.value%2==0)
        {
            return p.value<q.value;
        }
        else
        {
           return  p.track<q.track;




        }
    }
    else
        return p.mod<q.mod;

}

int main()
{
int n,m;
while(scanf("%d %d",&n,&m)==2)
{
    if(n==0&&m==0)
    {

        printf("0 0\n");
        break;
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].value;
        ar[i].mod=ar[i].value%m;
        if(ar[i].value%2==0)
              ar[i].track=2;
        else
            ar[i].track=1;
    }
    sort(ar,ar+n,comp);
    printf("%d %d\n",n,m);
    for(int i=0;i<n;i++)
     printf("%d\n",ar[i].value);

}
    return 0;
}
