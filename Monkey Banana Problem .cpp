#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
using namespace std;
long long int mat[205][205];
long long int dp[205][205];
long long int fun(long long int i, long long int j);
long long int n;
int main()
{

    long long int t,cs=1;
    scanf("%lld",&t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        memset(mat,-1,sizeof(mat));

        long long int k=0,i=0,p=0,q=1,c=0;
        cin>>n;
        // getchar();
        while(1)
        {
            char ch[100];
            //prlong long intf("%lld\n",k);
            if(k==2*n-1)
                break;
            scanf("%s",ch);
            p++;
            if(p==q)
            {
                long long int a=atoi(ch);
                //prlong long intf("%lld\n",a);
                mat[k][i++]=a;
                if(q==n||c==1)
                {
                    k++;
                    q--;
                    p=0;
                    c=1;
                    //continue;
                    i=0;
                }
                else
                {
                    k++;
                    q++;
                    p=0;
                    i=0;
                    //continue;
                }
            }
            else
            {
                long long int a=atoi(ch);

                mat[k][i++]=a;
            }
        }
for(int i=0;i<2*n;i++)
{
    for(int j=0;j<=n;j++)
    printf("%d",mat[i][j]);
    printf("\n");
}
        //long long int res=fun(0,0);
        //printf("Case %lld: %lld\n",cs++,res);

    }
    return 0;
}
long long int fun(long long int i, long long int j)
{

    if(i>=0&&j>=0&&i<2*n-1&&j<n&&mat[i][j]!=-1)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        long long int ret=-111111111;

       // ret=max(ret,fun(i+1,j)+mat[i][j]);
        ret=max(ret,fun(i+1,j-1)+mat[i][j]);
        ret=max(ret,fun(i+1,j+1)+mat[i][j]);

        //ret=max(ret,fun(i,j+1)+mat[i][j]);
        return dp[i][j]=ret;


    }
    else  return 0;

}
