#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;
void dfs(int i,int j);
char ch[26][26];
 int color[26][26];
 int r,cases=1;
int main()
{
    while(scanf("%d",&r)==1)
    {
        int k=0;
            memset(color,0,sizeof(color));

            for(int i=0; i<r;i++)
              scanf(" %[^\n]",ch[i]);

          for(int i=0;i<r;i++)
          {
              for(int j=0;j<r;j++)
              {
                  if(ch[i][j]=='1')
                  {
                      if(color[i][j]==0)
                      {k++;
                      dfs(i,j);
                      }

                  }

              }

          }
            printf("Image number %d contains %d war eagles.\n",cases++,k);

    }

    return 0;
}
void dfs(int i, int j)
{
    if(i<0||j<0||i>=r||j>=r)
      return ;
      if(ch[i][j]=='1')
      {
          if(color[i][j]==0)
          {
              color[i][j]=1;


        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i+1,j-1);
        dfs(i-1,j+1);
        dfs(i-1,j-1);
            return;

          }


      }
      else
       return ;



}
