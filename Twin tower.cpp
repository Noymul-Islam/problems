#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int dp[105][105];
char a[105],b[105];
int  call(int i, int j);

int main()
{
    int n,m,cs=1;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
        break;
        int i,j;
        for( i=0;i<n;i++)
        {
            int p;
            cin>>p;
            a[i]=p+21;

        }
        a[i]='\0';
        for(i=0;i<m;i++)
        {

            int p;
            cin>>p;
            b[i]=p+21;
        }
        b[i]='\0';
         memset(dp,-1,sizeof(dp));
        int res=call(0,0);
        printf("Twin Towers #%d\n",cs++);
        printf("Number of Tiles : %d\n\n",res);
    }

    return 0;
}
int call(int i,int j)
{

        if(a[i]=='\0'||b[j]=='\0')
        return 0;
        if(dp[i][j]!=-1)
           return dp[i][j];
           int ans=0;
           if(a[i]==b[j])
           ans=1+call(i+1,j+1);
           else
           {
               int val1=call(i+1,j);
               int val2=call(i,j+1);
               ans=max(val1,val2);
           }
           return dp[i][j]=ans;
}
