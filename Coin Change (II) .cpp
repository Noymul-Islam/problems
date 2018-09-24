#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int dp[110][10010];
int coin[110],value[110];
int fun(int amount , int i);
int n,k;
int t,cs=1;
int main()
{
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        for( int i=0; i<n; i++)
            cin>>coin[i];
        for(int i=0; i<n; i++)
            value[i]=k/coin[i];
        int res=fun(0,0)%100000007;
        printf("Case %d: %d\n",cs++,res);

    }

    return 0;
}


int fun(int i , int amount)
{

    if(i>=n)
    {
        if(amount==k)
            return 1;
        else
            return 0;

    }
    if(amount==k)
        return 1;
    else if(amount>k)
        return 0;
    if(dp[i][amount]!=-1)

        return dp[i][amount];
    int ret1=0,ret2=0;
    for(int take=1; take<=value[i]; take++)
    {
        if(amount+coin[i]*take<=k)
        {
            ret1=ret1+fun(i+1,amount+coin[i]*take)%100000007;
        }
        else
            break;

    }
    ret2=ret2+fun(i+1,amount)%100000007;

    return dp[i][amount]=ret1+ret2;



}
