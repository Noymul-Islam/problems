#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  //  printf("1");
    double x1,y1,x2,y2,x3,y3,xp,yp;

scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp);
    {
        printf("1");

        double res1, res2,res3,res4;
        res1=x1>x2?x1:x2;
        res2=x3>res1?x3:res1;
        res3=y1>y2?y1:y2;
        res4=y3>res3?y3:res3;
        printf("%lf %lf\n",res2,res4);
        if(xp<=res2&&yp<=res4)
        {

            printf("YES\n");
        }
        else
             printf("NO\n");

    }
return 0;

}
