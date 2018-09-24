#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
     int  t,cs=1;
     cin>>t;
     while(t--)
     {
         int ox,oy,ax,ay,bx,by;
         cin>>ox>>oy>>ax>>ay>>bx>>by;
          double a= sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
           double b=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
            double c=sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by)));

          //  printf("%lf %lf\n",b,c);
        double tp=acos(((b*b+c*c-a*a)/(2*c*b)));
         // cout<<s;
          double s=tp*b;
   printf("Case %d: %lf\n",cs++,s);
     }

    return 0;
}
