#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int arr1[1000000],arr2[1000000],res[1500000] ;

int main()
{
    int n,follow;
     while(scanf("%d",&n)==1)
     {
         for(follow=1;follow<=n;follow++)
         {
             int m,i,j,w=0,z,x,y,k=0;
             scanf("%d",&m);
              for(i=0;i<m;i++)
              {
                  scanf("%d %d",&arr1[i],&arr2[i]);

              }
              for(i=m-1;i>=0;i--)
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
               if(follow!=n)
                  printf("\n");



         }


     }

    return 0;
}
