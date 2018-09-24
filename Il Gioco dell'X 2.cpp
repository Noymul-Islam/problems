#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>

using namespace std;

void dfs (int i, int j);
int color[205][205],r,cases=1,p,k;
char ch[205][205];

int main()
{
    while(scanf("%d",&r)==1)
    {
        if(r==0)
           break;
            memset(color,0,sizeof(color));
             p=0;
              k=0;
                int winner=0;
           for(int i=0;i<r;i++)
           scanf(" %[^\n]",ch[i]);

           for(int i=0;;)
           {
               for(int j=0;j<r;j++)
               {
                  if(ch[i][j]=='b')
                  {
                      dfs(i,j);

                  }
                  if(k!=0)
                     {
                         winner++;
                          break;

                     }
               }
               if(k!=0)
                  break;
           }
            if(winner!=0)
               printf("%d B\n",cases++);
               else
               printf("%d W\n",cases++);

    }
    return 0;
}

void dfs(int i, int j)
{

    if(i<0||j<0||i>=r||j>=r)
       return;

    if(ch[i][j]=='b')
    {
        if(color[i][j]==0)
          {
              p=i;
              color[i][j]=1;

        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i-1,j-1);


          }


    }
     else
        return;
    if(p==r-1)
    {
        k++;
         return;
    }
}
