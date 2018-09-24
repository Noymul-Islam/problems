#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
 void dfs(int i);
int tiles[10][10];
int color[10][10];
int fal[10][10];
int number ;
int n,m,l;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {

 int    sum=0;
  scanf("%d %d %d",&n,&m,&l);

      number=1;
      memset(tiles,0,sizeof(tiles));

      for(int a=1;a<=m;a++)
      {
          int x,y ;
          scanf("%d %d",&x,&y);
          tiles[x][y]=1;

      }
      for(int a=1;a<=l;a++)
      {
          int fall;
          scanf("%d",&fall);


            //  if(tiles[fall][i]==1)
              //{
                  //color[fall]=1;
                  for(int i=1;i<=n;i++)
                  {
                   if(tiles[i][fall]==1)
                     {
                         fal[i][fall]=1;
                         break;
                     }

                  }
                  dfs(fall);
              //}

    sum=sum+number;

           number=1;

         memset(color,0,sizeof(color));

      }
      printf("%d\n",sum);
memset(fal,0,sizeof(fal));
  }
  return 0;

  }
void dfs(int i)
{

    for(int k=1;k<=n;k++)
    {
        if(tiles[i][k]==1&&color[i][k]==0&&fal[i][k]==0)
        {
            color[i][k]=1;
            fal[i][k]=1;
            number++;
            dfs(k);

        }

    }


}
