#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
void dfs(int a, int b);
int color[25][25];
char ch[25][25],p;
int m,n,MAX=0,k=0;
int main()
{

    while(scanf("%d %d",&m,&n)==2)
    {
        memset(color,0,sizeof(color));
        getchar();
        for(int i=0; i<m; i++)
            gets(ch[i]);
        int x,y;
        scanf("%d %d",&x,&y);
        //getchar();
  //getchar();
        p=ch[x][y];

        //color[x][y]=1;
        dfs(x,y);

        //if(k>MAX)
        //MAX=k;
        k=0;
        for(int i=0; i<m; i++ )
        {
            for(int j=0; j<n; j++)
            {

                if(color[i][j]==0)
                {
                    dfs(i,j);
                    if(k>MAX)
                        MAX=k;
                    k=0;
                }
            }
        }

        printf("%d\n",MAX);

       // printf("\n");
        k=0;
        MAX=0;

    }
    return 0;
}
void dfs(int a, int b)
{

if(b<0)
     b=n-1;
if(b>=n)
     b=0;
    if(a<0||a>=m)
        return ;

    else
    {
        if(ch[a][b]==p)
        {
            if(color[a][b]==0)

            {

                color[a][b]=1;
                k++;
               // if(b==0)
                 //   dfs(a,n-1);
               //else if(b==n-1)
                 //   dfs(a,0);
                dfs(a,b+1);
                dfs(a,b-1);
                dfs(a+1,b);
                dfs(a-1,b);
                //dfs(a-1,b+1);
                //dfs(a-1,b-1);
                // dfs(a+1,b+1);
                // dfs(a+1,b-1);
            }
        }
return ;
    }

}
