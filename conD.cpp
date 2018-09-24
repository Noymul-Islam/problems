#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<queue>
#include<map>
#include<sstream>
#include<set>
#include<algorithm>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    long long int l,u;
    while(scanf("%I64d %I64d",&l,&u)==2)
    {
      long long   int coun=0;
        long long int dist1;
        long long int dist2;
         long long int num1=l;
         int flag1=0,flag2=0;

        if(u-l<10)
        {


            for(long long int  i=l;i<=u;i++)
            {

                long long int k;
                k=i;
                long long int first=k%10;
                  long long int mod=-1;

                while(k!=0)
                {

                    mod=k%10;
                    k=k/10;



                }
                if(mod==first)
                      coun++;

            }
 //printf("oo");

           printf("%lld\n",coun);
        }

  else
       {
         //  printf("oo");

        while(num1%10!=0)
        {
            flag1=1;
            num1++;


        }
      //  if(flag1)
        dist1=num1-l;
        long long int num2=u;
        while(num2%10!=0)
        {
         num2--;
 // flag2=1;

        }
       // if(flag2)
        dist2=u-num2;
       // printf("%lld %ld\n",num1,num2);
        long long int ans=(num2-num1)/10;

        if(dist1!=0)
       {

        for(long long int i=l;i<num1;i++)
        {

             long long int first=i%10;
             long long int k=i;
            // k=k/10;
             long long mod;
             while(k!=0)
             {
                         mod=k%10;
                         k=k/10;



             }
             if(mod==first)
                {coun++;

                  //printf("fromyes");
                }

        }}
        if(dist2!=0)
       {

        for( long long int i=num2+1;i<=u;i++)
        {

             long long int first=i%10,k;
             k=i;
             k=k/10;
             long long mod;
             while(k!=0)
             {
                         mod=k%10;
                         k=k/10;


             }
             if(mod==first)
              {

                coun++;
            //  printf("from2nd");
              }


        }}
        printf("%I64d\n",coun+ans);}

    }

   return 0;
}
