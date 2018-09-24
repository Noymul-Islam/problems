#include<cstdio>
#include<cmath>

using namespace std;

int main()
{

    int t,cs=1;
    scanf("%d",&t);
    long long int w,reserve;
    while(t--)
    {
        long long a=1,b=0,add=2;
        scanf("%lld",&w);
        reserve=w;
        if(w%2==0)
        {
            while(1)
            {
                //a=a+add;
                if(w%2==0)
                {
                    w=w/2;
                    a=a*2;

                }
                else
                {
                    b=w;
                    break;
                }



            }

            printf("Case %d: %lld %lld\n",cs++,b,a);

        }
        else
            printf("Case %d: Impossible\n",cs++);


    }

    return 0;
}
