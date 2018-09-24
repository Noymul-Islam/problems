
///////////////////
//  Shamim Ehsan //
//  SUST CSE 12  //
//  2012331035   //
///////////////////
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<deque>
#include<algorithm>
#define PI (2* acos(0))
#define  pb push_back
using namespace std;
#define SZ 100010
char  flag[SZ];
int mob[SZ];
void sieve()
{
    long long int i,j;
    flag[0]=1;
    flag[1]=1;
    for(int i=1;i<=SZ-1;i++)
        mob[i]=1;
    for(int i=2;i<SZ;i++)
         if(!flag[i])
         {
                mob[i]=-1;
                for(int j=2*i;j<SZ;j+=i)
                {
                    flag[j]=1;
                    if(j%(i*i)==0) mob[j]=0;
                    mob[j]*=-1;
                }
         }
    return;
}
int main()
{
    int t,n,m;
    long long int ans;
    sieve();
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d %d",&n,&m);
        if(n==0 || m==0)
        {
            if(n+m!=0)
                ans=1;
            else
                ans=0;
            printf("Case %d: %lld\n",cs,ans);

        }
        else
        {
            ans=0;
            int mn=min(n,m);
            for(int i=1;i<=mn;i++)
            {
                ans+=(long long int)mob[i]*(m/i)*(n/i);
            }
            printf("Case %d: %lld\n",cs,ans+2);

        }
    }
    return 0;
}
