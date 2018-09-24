#include<cstdio>
#include<iostream>
using namespace std;

int match[110][110];
int main()
{
     int n,m;
     while(scanf("%d %d",&n,&m)==2)
     {
         int count=0;
         for(int i=0;i<n;i++)
         {
             int c=0;
             for(int j=0;j<m;j++)
                 {

                  scanf("%d",&match[i][j]);
                  if(match[i][j]==0)
                  {
                      c++;
                  }
                 }
                 if(c==0)
                      count++;
         }

         printf("%d\n",count);

     }

    return 0;
}
