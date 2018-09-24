
#include<cstdio>

using namespace std;

int main()
{
   long long  int a,t;
   scanf("%lld",&t);
   while(t--)
    {
        scanf("%lld",&a);
   long long  int count=0;
    while(a!=0)
    {   if(a%2!=0)
            count++;
        a=a/2;
    }
    printf("%lld\n",count);
}
return 0;
}
