#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>

using namespace std;
 void dfs(int i, int j);
 int n,m,k=1;
char  ch[102][102];
  int  color[102][102];
int main()
{

//bool flg=false;
    while(scanf("%d %d",&n,&m)==2)
    {

        if(n==0 && m==0)
           break ;
           if(k!=1)
            printf("\n");
memset(color,0,sizeof(color));

   for(int i=0;i<n;i++)
      scanf(" %[^\n]",ch[i]);

       for(int i=0;i<n;i++)
         for(int j=0;j<m;j++)
         {
             if(ch[i][j]!='*')
                ch[i][j]='0';
         }

       for(int i=0;i<n;i++)
         for(int j=0;j<m;j++)
         {
             if(ch[i][j]=='*')
             {
                 // color[i][j]=1;

                  dfs(i,j);

             }


         }
//if(flg)
//printf("\n");
//flg=true;
printf("Field #%d:\n",k++);
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        printf("%c",ch[i][j]);


      printf("\n");
      }
     //printf("\n");
    }

    return 0;
}
void dfs(int i, int j)
{

    if(i<0||j<0 ||i>=n ||j>=m)
      {


      return;
      }
    if(ch[i][j]=='*')
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
        }
      return ;

    }

      if(ch[i][j]!='*')
        {ch[i][j]++;

           return ;
        }

}
