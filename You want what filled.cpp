#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
void dfs(int i, int j);
char land[2500][2500];
 int color[2500][2500],x,y;
 struct data
 {
     int s;
      char ch;

 }a[2500];
  int serial;
  int comp( const data &p, const data &q)
  {

      if(p.s==q.s)
        return p.ch<q.ch;
        else
         return p.s>q.s;
  }

int main()
{
    int cases=1;
    while(scanf("%d %d",&x,&y)==2)
    {
        memset(color,0,sizeof(color));

        if(x==0&&y==0)
           break;
           serial=-1;
           for(int i=0;i<x;i++)
              scanf("%s",land[i]);

             for(int i=0;i<x;i++)
             {
                 for(int j=0;j<y;j++)
                 {
                     if((land[i][j]!='.')&&(color[i][j]==0))
                     {
                          serial++;
                          a[serial].s=0;
                          a[serial].ch= land[i][j];
                          dfs(i,j);

                     }

                 }

             }

        sort(a,a+serial+1,comp);
        printf("Problem %d:\n",cases++);

        for(int i=0;i<=serial;i++)
        {
            printf("%c %d\n",a[i].ch,a[i].s);

        }


    }

    return 0;
}

void dfs(int i, int j)
{

    if(i<0||j<0||i>=x||j>=y)
      return ;
       if(land[i][j]==a[serial].ch)
      {

          if(color[i][j]==0)
          {
              color[i][j]=1;
              a[serial].s++;



        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        //dfs(i+1,j+1);
        //dfs(i+1,j-1);
        //dfs(i-1,j+1);
        //dfs(i-1,j-1);

          }

      }
return;
}
