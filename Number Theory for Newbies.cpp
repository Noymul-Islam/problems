#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;

int comp( const char &p, const char &q)
{
    if(p<q)
      return q;
      else
      return p;

}
int main()
{
    char ch[12];
    while(gets(ch))
    {
        char accending[12],decending[12];
        long long int a,b,c,res1,res2,k;
        strcpy(accending,ch);
        strcpy(decending,ch);
        a=atoi(ch);
        sort(accending,accending+12);
        sort(decending,decending+12,comp);

        b=atoi(accending);
        c=atoi(decending);
        printf("%lld %lld %lld\n",a,b,c);
        if(b>a)
        {

            res1=b-a;
        }
        else
        res1=a-b;
        if(c>a)
        {

            res2=c-a;
        }
        else
         res2=a-c;

         if(res1>res2)
         {

             k=res1/9;
         }
         else
          k=res2/9;
          if(b>a&&b>c)
          printf("%lld - %lld = %lld = 9 * %lld\n",b,a,res1,k);
          else if(a>b&&b>c)
          printf("%lld - %lld = %lld = 9 * %lld\n",a,b,res1,k);
         else if(c>a&&c>b)
           printf("%lld - %lld = %lld = 9 * %lld\n",c,a,res2,k);
           else if(a>c&&c>b)
           printf("%lld - %lld = %lld = 9 * %lld\n",a,c,res2,k);

    }
    return 0;
}
