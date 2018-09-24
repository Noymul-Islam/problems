#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
void dfs(int i, int j);
char ch[205][205];
int color[205][205];
int cases=1,p,r,m;

int main()
{
    while(scanf("%d",&r)==1)
    {
        if(r==0)
            break;
        int i;
        m=0;
        memset(color,0,sizeof(color));

        for(int k=0; k<r; k++)
            scanf(" %[^\n]",ch[k]);

        for(int j=0; j<r; j++)
        {
            i=0;
            if(ch[i][j]=='b')
            {
                dfs(i,j);
                if(m!=0)
                    break;

            }

        }
        if(m!=0)
            printf("%d B\n",cases++);
        else
            printf("%d W\n",cases++);

    }
    return 0;
}
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r||j>=r)
        return;
    if(ch[i][j]=='b')
    {
        if(color[i][j]==0)
        {
            // printf("%d\n",i);
            color[i][j]=1;

            if(i==r-1)
            {
                m++;

                return;
            }

            dfs(i,j+1);
            dfs(i,j-1);
            dfs(i+1,j);
            dfs(i-1,j);
            dfs(i+1,j+1);
            dfs(i-1,j-1);
            return;

        }
        //if(i==r-1)
        //{
        //  m++;

        //return;
        //}

    }

}
