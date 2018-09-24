#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>

using namespace std;
string ans,com;
char a[110],b[110];
int dp[110][110],c=0;
int call(int i, int j);
void print(int i, int j );


int main()
{
    int t,cs=1;
    cin>>t;
    getchar();
    while(t--)
    {
        getchar();

        scanf("%s %s",a,b);
        memset(dp,-1,sizeof(dp));
        c=0;
        int res=call(0,0);
     if (res==0)
     printf("Case %d: :(\n",cs++);
     else
     {

         print(0,0);
         //printf("Case 2: zxb")
         cout<<"Case "<<cs++<<":"<<" "<<com<<endl;

     }

  ans.clear();
  com.clear();
    }
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
        //cout<<ans<<endl;
        if(c==0)
        {
            com=ans;
            c++;
        }
        else
        {

            if(com>ans)
            {
                com=ans;
            }
        }
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
