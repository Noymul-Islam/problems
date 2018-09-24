#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int n,m,a,b,res=1;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    double tckt ,spcl;

    spcl=((double)b/(double)m);
   double sum=0;
   if(m>n&&(n*a>b))
   {
  //printf("1");
       printf("%d\n",b);
   }
   else
   {


    while(n>0)
    {
        //printf("1");
        if(spcl<(double)a)
        {
            sum=sum+(double)b;
            n=n-m;


        }


        //else
        //{

          //  sum=sum+(double)a;
            //n--;
       // }


    }




       printf("%d\n",(int)sum);

   }

    return 0;
}
