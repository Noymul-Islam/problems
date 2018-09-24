#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;
void dfs(int i, int j);
char ch[105][105];
int color[105][105];
int c,r;
int main()
{
    while(scanf("%d %d",&r,&c)==2)
    {
        memset(color,0,sizeof(color));
        if(c==0&&r==0)
            break;
        int k=0;
        for(int i=0; i<r; i++)
            scanf(" %[^\n]",ch[i]);

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(ch[i][j]=='*')
                {
                    dfs(i,j);

                    //color[i][j]=1;
                }
            }
        }
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if(color[i][j]==1)
                    k++;


            }
        printf("%d\n",k);

    }

    return 0;

}

void dfs(int i,int j)
{

    if(i<0||j<0||i>=r||j>=c)
        return;
    if(ch[i][j]=='*')
    {
        if(color[i][j]==0)
          color[i][j]++;

        else if(color[i][j]!=0)
        {color[i][j]++;
           return;
        }

        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i+1,j+1);
        dfs(i+1,j-1);
        dfs(i-1,j+1);
        dfs(i-1,j-1);

        return ;
    }
    else
        return;


}
