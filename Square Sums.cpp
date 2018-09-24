#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int>v;

int ar[500][500];
void dfs(int i,int j);
int color[500][500];
int n,m,sum,cs=1;
int main()
{
    while(scanf("%d",&n)==1)
    {
        if(n==0)
              break;
        for(int i=1;i<=n;i++)
              for(int j=1;j<=n;j++)
                  {cin>>ar[i][j];
                  color[i][j]=0;
                  }
        int loop=(n/2)+(n%2);
        m=1;
        int row=1,col=1;
        while(loop--)
        {
            dfs(row,col);
            row++;
            col++;
            n--;
            m++;
            v.push_back(sum);
           sum=0;

        }
        printf("Case %d:",cs++);
        for(int k=0;k<v.size();k++)
             printf(" %d",v[k]);
        printf("\n");
        v.clear();
    }

    return 0;
}
void dfs(int i,int j)
{
    if((i>m&&i<n)&&(j>m&&j<n)||color[i][j]==1)
        return;
        if(i<m||i>n||j<m||j>n)
             return;

    if(!color[i][j])
    {
        color[i][j]=1;
        sum+=ar[i][j];

        dfs(i,j+1);
         dfs(i+1,j);

    }

}
