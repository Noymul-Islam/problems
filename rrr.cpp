#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int n,follow;
     while(scanf("%d",&n)==1)
     {
         for(follow=1;follow<=n;follow++)
         {
             int m,i,j,arr1[1100000],arr2[1100000],res[2200000],w=0,z,x,y,k=0;
             scanf("%d",&m);
              for(i=0;i<m;i++)
              {
                  scanf("%d %d",&arr1[i],&arr2[i]);

              }
              for(i=0;i<m;i++)
              {
                  x=arr1[i];
                  y=arr2[i];
                  z=(x+y+w)%10;

                  w=(x+y+w)/10;
                  res[k++]=z;


              }
              for(i=k-1;i>=0;i--)
                  printf("%d",res[i]);

               printf("\n");



         }


     }

    return 0;
}

