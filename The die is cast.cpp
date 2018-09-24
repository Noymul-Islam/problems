#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

char ch[100][100];
int color[100][100];
int color1[100][100];
void dfs(int i, int j);
void dfs1(int i, int j);
int coun;
vector<int>v;

    int w,h,cs=1;
int main()
{
    while(scanf("%d %d",&w,&h)==2)
    {
        getchar();
        if(w==0&&h==0)
              break;
        for(int i=0;i<h;i++)
            gets(ch[i]);
            //scanf("%s",ch[i]);
        memset(color,0,sizeof(color));
        memset(color1,0,sizeof(color1));
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(ch[i][j]=='*'||ch[i][j]=='X')
                {
                    if(color[i][j]==0)
                    {
                        coun=0;
                        dfs(i,j);
                        if(coun!=0)
                        v.push_back(coun);
                    }

                }

            }
        }
        if(v.size()==0)
        {printf("Throw %d\n0\n\n",cs++);
       // printf("--?");
          continue;}
        sort(v.begin(),v.end());
        printf("Throw %d\n%d",cs++,v[0]);
        for(int i=1;i<v.size();i++)
            printf(" %d",v[i]);
            printf("\n");
            v.clear();
            printf("\n");
    }

    return 0;
}

void dfs(int i, int j)
{
    if(i<0||j<0||i>=h||j>=w||ch[i][j]=='.')
         return;
    if(color[i][j]==0)
    {
        color[i][j]=1;
        if(ch[i][j]=='X')
        {
            if(color1[i][j]==0)
            {
                coun++;
                dfs1(i,j);
                //dfs
                      //color1[i][j]=1;
                   //v.push_back(coun);
                   //coun=0;
            }

        }
        dfs(i+1,j);
        dfs(i-1,j);
        dfs(i,j+1);
        dfs(i,j-1);

    }

}
void dfs1(int i, int j)
{
    if(i<0||j<0||i>=h||j>=w||ch[i][j]=='*'||ch[i][j]=='.')
          return ;
    if(color1[i][j]==0)
    {
        color1[i][j]=1;
        dfs1(i+1,j);
        dfs1(i-1,j);
        dfs1(i,j-1);
        dfs1(i,j+1);

    }
}
