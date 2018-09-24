#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {

        long long int mod= pow(2,m);
        long long int i,j,k,res=0,a=0,b=1;
        for(i=0;i<n;i++)
        {

            res=  ((a%mod)+(b%mod))%mod;
            a=b%mod;


        }





    }


}
