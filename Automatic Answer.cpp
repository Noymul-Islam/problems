#include<cstdio>

using namespace std;

int main()
{

    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long int n;
        scanf("%lld",&n);

        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;

        n=n%100;

      n=n/10;
      if(n<0)
        printf("%lld\n",n*-1);
  else
      printf("%lld\n",n);

    }
    return 0;
}
