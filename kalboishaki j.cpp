#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double v;

    while(scanf("%lf",&v)==1)
    {

        double t;
        t=v/9.80;
      double  y=4.9*t*t;
        double N;
        N=(y+5)/5;

        long long int a;
        a=(long long int)N;
        double k=(double)a;
        if(N-k>0.00)
        {

            a++;

        }
       // else


        printf("%lld\n",a);


    }
return 0;

}
