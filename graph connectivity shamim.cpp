#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int m;
char grid[500][550];
char colour[500];
void dfs(int i)
{   colour[i]=1;
    int k;
    for(k=0;k<m;k++)
    {
        if(grid[i][k]==1 && colour[k]==0)
        dfs(k);
    }
}
    int main()
{

    //freopen("in.txt","w",stdout);

    int t,i,j,ot=0;
    scanf("%d",&t);
    getchar();
    char temp[500],c;
    if(t)
    gets(temp);//ekta blank line
    while(t--)
    {
        scanf("%c",&c);
        m=c-'A'+1;
        getchar();
        while(gets(temp) && temp[0]!='\0')// ar ekta blank line paile loop break korbe,tokhon hoy notin input nibe or blank line diye input terminate er condition kaj korbe
        {

            grid[temp[0]-'A'][temp[1]-'A']=grid[temp[1]-'A'][temp[0]-'A']=1;
        }
        for(i=0;i<m;i++)
        grid[i][i]=1;
        int cnt=0;
        for(i=0;i<m;i++)
            for(j=0;j<m;j++)
                {
                    if(grid[i][j]==1  && colour[i]==0)
                    {
                        dfs(i);
                        cnt++;
                    }
                }
                if(ot==1)
                printf("\n");
                ot++;
        printf("%d\n",cnt);
        memset(colour,0,sizeof(colour));
        for(i=0;i<m;i++)
        for(j=i+1;j<m;j++)
        {
            grid[i][j]=grid[j][i]=0;
        }
    }
return 0;
}
