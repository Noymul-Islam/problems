#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std ;

void floyed();

int ar[101][101];
int n,r;
int main()
{ int cs=1;
    while(scanf("%d %d",&n,&r)==2)
    {


        if(n==0&&r==0)
              break;
        memset(ar,0,sizeof(ar));
        while(r--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            if(ar[u][v]<w)
            {
                ar[u][v]=w;
                ar[v][u]=w;

            }


            }
            floyed();
            int s,d,people;

            cin>>s>>d>>people;
           // people+=1;
            //int res=people%(ar[s][d]-1);
          //  int res1=people/(ar[s][d]-1);
             int res1=0;
               if(s==d)
                res1=0;
              else  if(people<=ar[s][d])
              res1=2;
                  else
                  {
                      while(people>0)
                      {
                          people=people-(ar[s][d]-1);
                          res1++;
                      }

                  }

            printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",cs++,res1);



    }



    return 0;
}

void floyed()
{


        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {

                for(int j=1;j<=n;j++)
                {

                    ar[i][j]=max(ar[i][j],min(ar[i][k],ar[k][j]));
                }
            }
        }


}
