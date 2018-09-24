#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3,xp,yp;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)==8)
    {
        double res[3],res1[3];
        res[0]=x1;
        res[1]=x2;
        res[2]=x3;
        res1[0]=y1;
        res1[1]=y2;
        res1[2]=y3;

        sort(res,res+3);
        sort(res1,res1+3);



        if(((xp>=res[0])&&(xp<=res[2]))&&((yp>=res1[0])&&(yp<=res1[2])))
                  printf("YES\n");
        else
             printf("NO\n");





        }
    return 0;

    }


