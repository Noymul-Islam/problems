#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
long long int mod(long long int x, long long int y,long long int n);

int main()
{
    int cases,follow;
    while(scanf("%d",&cases)==1)
    {
        if(cases==0)
               break;
        for(follow=0;follow<cases;follow++)
        {

            long long int x,y,n,z,res;
            scanf("%lld %lld %lld",&x,&y,&n);
            z=mod(x,y,n);
            printf("%lld\n",z);



        }
    }

    return 0;
}
long long int mod(long long int x,long long int y, long long int n)
{
    if(y==0)
         return 1;

    else
    {
        if(y%2==0)
        {
            long long int ret= mod(x,y/2,n);
            return (((ret%n)*(ret%n))%n);
        }

        else
        {
            return (((x%n)*(mod(x,y-1,n)%n))%n);
        }
    }



}
