#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>

using namespace std;

 int fun( int i, int j);

int dp[100][150];
int mat[100][150];
int n;
int main()
{
    int t,cs=1;
     cin>>t;
     while(t--)
    {

         cin>>n;
         for(int i=0;i<n;i++)
          {
              for(int j=0; j<3 ;j++)
                 cin>>mat[i][j];
          }
          memset(dp,-1,sizeof(dp));
           int res=fun(0,0);
            //memset(dp,-1,sizeof(dp));
           //cout<<res<<endl;
            int res1=fun(0,1);
            // memset(dp,-1,sizeof(dp));
            //cout<<res1<<endl;
             int res2=fun(0,2);
             //cout<<res2<<endl;
             int result=min(res2,min(res1,res));
             printf("Case %d: %d\n",cs++,result);
            // printf("%d\n",fun(0,0));





    }

 return 0;
}

 int fun(int  i , int j)
 {
     if(i==n)
          return 0;

          else
          {
              if(dp[i][j]!=-1)
                   return dp[i][j];
             int ret=999999999;
              int a;
              for(a=0;a<3;a++){
              if(a!=j)
              {
                  ret=min(ret,fun(i+1,a)+mat[i][j]);

              }
              }
return dp[i][j]=ret;

          }


 }
