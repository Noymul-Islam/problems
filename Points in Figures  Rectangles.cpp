#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    double points[11][10];
    char c[7]; double upx ,upy,lx,ly;
     int i=0;
    while(1)
    {
         scanf("%s",c);
         if(c[0]=='*')
               break;
               else
               {


        scanf("%lf %lf %lf %lf",&upx,&upy,&lx,&ly);
        points[++i][0]=upx;
         points[i][1]=upy;
         points[i][2]=lx;
          points[i][3]=ly;
               }
    }
    //printf("%d\n",i);
    double a,b;
      int k=1;
    while(scanf("%lf %lf",&a,&b)==2)
    {
        if(a==9999.9&&b==9999.9)
              break;
               int t=0;
        for(int j=1;j<=i;j++)
        {
            if(a>points[j][0]&&a<points[j][2]&&b<points[j][1]&b>points[j][3])
            {

                printf("Point %d is contained in figure %d\n",k,j);
                t++;
            }


        }

        if(t==0)

             printf("Point %d is not contained in any figure\n",k);
     k++;
    }

    return 0;
}
