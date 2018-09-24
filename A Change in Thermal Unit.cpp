#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
    int cases,follow;
    while(scanf("%d",&cases)==1)
    {
      for(follow=1;follow<=cases;follow++)
      {
          double C,c2_c1,res;
          scanf("%lf %lf",&C,&c2_c1);
          c2_c1=(5*c2_c1)/9;
          res=C+c2_c1;
          printf("Case %d: %0.2lf\n",follow,res);

      }


    }
    return 0;

}
