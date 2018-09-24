#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>

using namespace std;
int color[100][100],track[100][2];
char grid[100][100];
int tot=0,m,col;
void dfs(int i, int j);
int main()
{
    int t,line=0;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        int k=0,c=0,len;
        memset(color,0,sizeof(color));
        int a,b;
        char ch[100],ch2[100];
        m=0;

        gets(ch);
        {
            sscanf(ch,"%d %d",&a,&b);
            track[k][0]=a;
            track[k][1]=b;
            len=strlen(ch);
        }
        while(gets(ch))
        {
            // if(strlen(ch)!=len)

            strcpy(grid[m++],ch);
            col=strlen(ch);
            while(gets(ch))
            {
                if(strlen(ch)==0)
                {
                    //int c=0;
                    c++;
                    break;
                }
                else
                    strcpy(grid[m++],ch);

            }


            //if(strlen(ch)==0)
            //else  // break;
            //{
            //sscanf(ch,"%d %d",&a,&b);
            //track[k][0]=a;
            //  track[k++][1]=b;
            //}
            if(c>0)
                break;
        }
     if(line)
        printf("\n");
     line=1;
        for(int i=0; i<=k; i++)
        {
            // memset(color,0,sizeof(color));
            tot=0;
            dfs(track[i][0]-1,track[i][1]-1);
            printf("%d\n",tot);
        }
        //if(t)
          //  printf("\n");
        //line=1;

    }

    return 0;
}


void dfs(int i, int j)
{
    if(i<0||j<0||i>=m||j>=col)
        return;

    if(color[i][j]==0&&grid[i][j]=='0')
    {
        tot++;
        color[i][j]=1;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i-1,j);
        dfs(i+1,j);
        /*dfs(i-1,j+1);
        dfs(i-1,j-1);
        dfs(i+1,j+1);
        dfs(i+1,j-1);*/

    }

}
