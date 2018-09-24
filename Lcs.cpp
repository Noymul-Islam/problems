#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;
string ans;
char a[110],b[110];
int dp[110][110];
int call(int i, int j);
void print(int i, int j );
int main()
{
    scanf("%s %s",a,b);
    memset(dp,-1,sizeof(dp));
    printf("%d\n",call(0,0));
    print(0,0);
    return 0;

}


int call(int i, int j)
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

void print( int i, int j)
{
    if(a[i]=='\0'||b[j]=='\0')
      {
        cout<<ans<<endl;
       return ;
      }
    if(a[i]==b[j])
    {
        ans+=a[i];
        print(i+1,j+1);
        ans.erase(ans.end()-1);

    }
    else if(dp[i+1][j]>dp[i][j+1])
    print(i+1,j);
    else if(dp[i+1][j]<dp[i][j+1])
    print(i,j+1);
    else
    {

        print(i+1,j);
        print(i,j+1);
    }

}
