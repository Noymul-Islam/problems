

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void dfs(int a,int b);
int node,m,n,count,max;
char colour[100][100];
char graph[500][500];
int main()
{
    int i,j,maxcell,t,ct=0;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        maxcell=0;

        getchar();
        if(ct)
        printf("\n");
        ct++;
    gets(graph[0]);
    m=strlen(graph[0]);
    n=strlen(graph[0]);

        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                colour[i][j]=0;
        for(i=1; i<m; i++)
            gets(graph[i]);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {

                if(graph[i][j]=='1')
                {
                    if(colour[i][j]==0)
                    {
                        max=0;
                        dfs(i,j);
                        if(max>maxcell)
                            maxcell=max;
                    }

                }



            }



        printf("%d\n",maxcell);

    }

    return 0;
}
void dfs(int i,int j)
{

    if(colour[i][j]==1)
    {
        return;
    }
    colour[i][j]=1;
    max++;
    if(j+1<n)
        if(graph[i][j+1]=='1')
        {

            dfs(i,j+1);


        }
    if(i+1<m)
        if(graph[i+1][j]=='1')
        {
            dfs(i+1,j);


        }
    if(i-1>=0)
        if((graph[i-1][j])=='1')
        {

            dfs(i-1,j);


        }
    if(i-1>=0 && j+1<n)
        if((graph[i-1][j+1])=='1')
        {
            dfs(i-1,j+1);

        }

    if(i+1<m && j+1<n)
        if((graph[i+1][j+1])=='1')
        {
            dfs(i+1,j+1);

        }
    if(i-1>=0 && j-1 >=0)
        if( (graph[i-1][j-1])=='1')
        {
            dfs(i-1,j-1);

        }
    if(j-1>=0)
        if((graph[i][j-1])=='1')
        {
            dfs(i,j-1);

        }
    if(i+1<m && j-1>=0)
        if((graph[i+1][j-1])=='1')
        {

            dfs(i+1,j-1);

        }

    return;
}
