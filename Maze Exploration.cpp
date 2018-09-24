#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;

void dfs(int , int j);
char c;
int color[100][100];
char ch[100][100];
int row;
int main()
{

    int t;
    cin>>t;
    getchar();
    int k=1;
    while(t--)
    {
       row=0,k=1;
        gets(ch[0]);
        //getchar();
        int len=strlen(ch[0]);
        for(int i=0;i<len;i++)
        {
            if(ch[0][i]==' ')
                  continue;
            else
                {
                    c=ch[0][i];
                      break;
                }

        }
        while(gets(ch[k]))
        {
            row++;
            int num=0;
            len=strlen(ch[k]);
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
        if(ch[i][j]=='*')
        {
            ch[i][j]='#';
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
    printf("\n");
}


    }
    return 0;
}

void dfs(int i,int j)
{
    if(i<0||j<0||ch[i][j]=='\0'||i>=row||ch[i][j]==c)
        return ;
    if(color[i][j]==0)
    {color[i][j]=1;

if(ch[i][j]==' ')
      ch[i][j]='#';
dfs(i+1,j);
dfs(i-1,j);
dfs(i,j+1);
dfs(i,j-1);


    }

}
