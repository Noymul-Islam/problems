#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int seen[60],match[60],bp[60][60];
int male[60][3],female[60][3];
  int m,n;

  bool bpm(int u)
  {
      for(int v=0;v<n;v++)
      {
          if(bp[u][v]&&!seen[v])
          {
              seen[v]=1;
              if(match[v]<0||bpm(match[v]))
              {

                  match[v]=u;
                  return true;
              }


          }

      }
       return false;
  }
  int max_bpm()
  {
      memset(match,-1,sizeof(match));
      int res=0;
      for(int u=0;u<m;u++)
      {
          memset(seen,0,sizeof(seen));
          if(bpm(u))
             res++;

      }
   return res;
  }
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
         memset(bp,0,sizeof(bp));
        scanf("%d %d",&m,&n);
        for(int i=0;i<m;i++)
        {
            cin>>male[i][0]>>male[i][1]>>male[i][2];

        }
        for(int i=0;i<n;i++)
        {
            cin>>female[i][0]>>female[i][1]>>female[i][2];
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            if(abs(male[i][0]-female[j][0])<=12&&abs(male[i][1]-female[j][1])<=5&&male[i][2]==female[j][2])
            {

                bp[i][j]=1;
            }


        }
        printf("Case %d: %d\n",cs++,max_bpm());

    }
    return 0;
}
