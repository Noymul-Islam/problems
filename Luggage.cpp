#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<sstream>

using namespace std;

int dp[21][210];
int knapsak(int item, int weight);
vector<int>v;
int main()
{
    int m,n,num,sum;
    cin>>m;
    int k=0;
    while(m--)
    {
        if(!k)
            getchar();
        k=1;
        n=0,sum=0;
        memset(dp,-1,sizeof(dp));

        char line[50];
        //scanf("%s",line);
        gets(line);
        //getchar();
        stringstream ss(line);

        while(ss>>num)
        {

            v.push_back(num);
            n++;
            sum+=num;
            //printf("1");
        }
        int half=knapsak(n,sum/2);
       // printf("%d\n",half);
        if(half*2==sum)
            printf("YES\n");
        else
            printf("NO\n");
        v.clear();
    }

    return 0;
}

int knapsak(int item, int weight)
{
    for(int i=0; i<=weight; i++)
        dp[0][i]=0;
    for(int i=1; i<=item; i++)
    {

        for(int j=0; j<=weight; j++)
        {
            if(v[i-1]<=j)
            {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i-1]]+v[i-1]);


            }
            else
                dp[i][j]=dp[i-1][j];

        }
    }
    return dp[item][weight];
}
