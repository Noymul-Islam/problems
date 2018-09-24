#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;
char ch[100][100];
void dfs(int i, int j);
int row=0;
int color[100][100];
char c,c1;
int main()
{
    char ar[100];

    while(gets(ar))
    {
        strcpy(ch[0],ar);
        row=0;
        int len=strlen(ch[0]);
        for(int i=0;i<len;i++)
        {if(ch[0][i]==' ')
            continue;
            c=ch[0][i];
                 break;
        }
        int k=1;
        while(gets(ch[k]))
        {
            row++;
            int num=0;
             len= strlen(ch[k]);
             for(int i=0;i<len;i++)
             {
                 if(ch[k][i]=='_')
                    num++;
             }
             if(num==len)
                  break;
             k++;


        }
        memset(color,0,sizeof(color));

        for(int i=0;i<row;i++)
        {
            for(int j=0;;j++)
            {
                if(ch[i][j]=='\0')
                      break;
                if(ch[i][j]!=' '&&ch[i][j]!=c)
                {
                    c1=ch[i][j];
                    dfs(i,j);

                }
            }

        }

        for(int i=0;i<=row;i++)
         {

            for(int j=0;;j++)
        {
            if(ch[i][j]=='\0')
                 break;
            printf("%c",ch[i][j]);

        }
        printf("\n");}
    }

 return 0;
}
void dfs(int i, int j)
{
    if(i>=row||i<0||ch[i][j]=='\0'||ch[i][j]==c||j<0)
          return ;
    if(color[i][j]==0)
    {
        color[i][j]=1;
        if(ch[i][j]==' ')
             ch[i][j]=c1;
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i,j+1);
        dfs(i,j-1);


    }

}
