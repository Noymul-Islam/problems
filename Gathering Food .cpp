#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
int num,num1;
void dfs(int i, int j);
int color[12][12],n;
int visit[12][12];
char c;
  char ar[15][15];
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getchar();

        num=-1;
        num1=0;
        memset(color,0,sizeof(color));
        memset(visit,0,sizeof(visit));
        scanf("%d",&n);
        getchar();

        for(int i=0; i<n; i++)
            scanf("%s",ar[i]);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]=='A')
                {
                    c=64;
                    dfs(i,j);


                }

            }
            int k=0;
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
            {
                if(visit[i][j]==0)
                       {k++;
                      break;}
            }
            if(k!=0)
                printf("Case %d: Impossible\n",cs++);
            else
            printf("Case %d: %d\n",cs++,num);

    }
}

void dfs(int i, int j)
{
    if(i<0||j<0||i>=n||j>=n||color[i][j]==1||ar[i][j]=='#')
        {
            if(ar[i][j]=='#')
                   visit[i][j]=1;
            return ;}
    if(color[i][j]==0)
    {
        if(ar[i][j]==c+1)
        {
            //color[i][j]=1;
            visit[i][j]=1;
            c=ar[i][j];
            num++;
            num=num+num1;
            num1=0;
            dfs(i,j+1);
             dfs(i-1,j);
            dfs(i,j-1);

            dfs(i+1,j);
            return ;

        }
        else if(ar[i][j]=='.')
        {
            color[i][j]=1;
            visit[i][j]=1;
            num1++;
            dfs(i,j+1);
            dfs(i,j-1);
            dfs(i-1,j);
            dfs(i+1,j);
            return ;N


        }

    }


}
