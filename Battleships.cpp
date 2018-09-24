#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>

using namespace std;
void dfs(int i, int j);
char ch[500][500];
int color[500][500];
int n;
int  main()
{int t,cs=1;;
cin>>t;
getchar();
while(t--)
{
    memset(color,0,sizeof(color));
    int count=0;

    cin>>n;
       getchar();
    for(int i=0;i<n;i++)
          gets(ch[i]);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {if(ch[i][j]=='x')
           {
               if(color[i][j]==0)
               {
                   count++;
                   dfs(i,j);
               }

           }}

       }
          printf("Case %d: %d\n",cs++,count);
}

    return 0;
}
void dfs(int i, int j)
{
    if(i<0||j<0||i>=n||j>=n)
        return ;
    if(ch[i][j]=='x')
    {
        if(color[i][j]==0)
        {
            color[i][j]=1;
            dfs(i,j+1);
            dfs(i,j-1);
            dfs(i-1,j);
            dfs(i+1,j);

        }
    }
}
