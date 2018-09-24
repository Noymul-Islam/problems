#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
              break;
        if(n>=101)
              printf("f91(%lld) = %lld\n",n,n-10);
        else
             printf("f91(%lld) = 91\n",n);

    }
    return 0;

}
