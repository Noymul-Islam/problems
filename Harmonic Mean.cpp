#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std ;

 int main()
{
      long long int cs=1;
    long long int t;
      cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ar[n];
        for(long long int i=0;i<n;i++)
              cin>>ar[i];
               long long int lcm=1;
        for(long long int i=0;i<n;i++)
        {
            lcm=(lcm*ar[i])/(__gcd(lcm,ar[i]));


        }
         long long int div=0;
        //prlong long intf("%lld\n",lcm);
        for(long long int i=0;i<n;i++)
        {
            div=div+(lcm/ar[i]);

        }
        //cout<<div;
        long long int up=lcm*n;
        long long int divide=__gcd(up,div);
        up=up/divide;
        div=div/divide;
        printf("Case %lld: %lld/%lld\n",cs++,up,div);
    }
    return 0;
}
