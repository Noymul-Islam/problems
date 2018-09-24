#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    int n,k=0;
     double gx, gy,dx,dy;
     while(scanf("%d %lf %lf %lf %lf",&n,&gx,&gy,&dx,&dy)==5)
    {
        //if(k==1)
            // printf("\n");
        //k=1;
         int c=0,p=0;
           double k=9999999999999,ansx,ansy;
        for(int i=1;i<=n;i++)
        {
             double x,y;
              scanf("%lf %lf",&x,&y);

              double res=sqrt(((x-gx)*(x-gx))+((y-gy)*(y-gy)));
               double res1=sqrt(((x-dx)*(x-dx))+((y-dy)*(y-dy)));
               if(2*res<=res1)
               {
                   if(res<k)
                   {
                       ansx=x;
                       ansy=y;
                   }
                  // printf("The gopher can escape through the hole at (%0.3lf,%0.3lf).\n",x,y);

               }
            else
                 c++;
                      if(c==n)
             {
                 p++;
                 printf("The gopher cannot escape.\n");

             }
        }
        if(p==0)
 printf("The gopher can escape through the hole at (%0.3lf,%0.3lf).\n",ansx,ansy);


    }

 return 0;
}
