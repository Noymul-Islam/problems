#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
             break;
        if(n%9==0)
        {
          long long  int k=n/9;
            printf("%lld %lld\n",(n+k-1),(n+k));

        }
        else
        {

        long long  int z=n/9;
           printf("%lld\n",(n+z));
        }

    }

    return 0;
}
