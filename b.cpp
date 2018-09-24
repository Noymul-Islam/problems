#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
#include<map>
#include<sstream>
#include<stack>

using namespace std;
/*If it works than it is my code otherwise, I dnt know who the hell wrote it!!!*/
void dfs(int i, int j,int time);
 char cp;
 int k;
 int r,c;
 int  n,m;
  char ch[500][500];
    int color[500][500];
    int coun;
int main()
{

     cin>>n>>m;
      getchar();

     for(int i=0;i<n;i++)
          gets(ch[i]);

     memset(color,0,sizeof(color));

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             memset(color,0,sizeof(color));
             int t=0;
              cp=ch[i][j];
              r=i;
               c=j;
              dfs(i,j,t);
              //printf("%d\n",k);
              if(k)
                      break;

         }
         if(k)
             break;
     }
     if(k)
         printf("Yes\n");
     else
        printf("No\n");
    return 0;
}

void dfs(int i, int j, int time)
{
    //printf("%d\n",time);
    //coun++;
    if(i<0||j<0||i>=n||j>=m||ch[i][j]!=cp)
           return ;

           if(i==r&&j==c&&time>=4)
           {
               k++;
           }
           if(k)
             return ;

    if(!color[i][j])
    {
        color[i][j]=1;

        dfs(i+1,j,time+1);
        dfs(i-1,j,time+1);
        dfs(i,j+1,time+1);
        dfs(i,j-1,time+1);
    }


}
