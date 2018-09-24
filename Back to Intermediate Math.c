#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()

{
    int a,b;

    while(scanf("%d",&a)==1)
    {


        for(b=1;b<=a;b++)
        {

           double m,n,i,j,c,s,k,v,u,p;
           int d;

           scanf("%d %lf %lf",&d,&v,&u);


            m=acos(-(u/v))*(pi/180);
            printf("%lf\n",m);
            if(m>=180)
                  printf("can't determine\n");

                  else
                  {




                      i= d/(u*sin(m));

                      j=d/u;


                      p=fabs(i-j);

                  }


            printf("%lf\n",p);
        }
    }


}
