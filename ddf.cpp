
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        long long int k=0,c=0,i,v[1000000];


        while(n!=1)
        {
            if((n%m)==0)
            {
                v[k]=n;
               n=n/m;
               k++;


            }
            else
            {c++;
            break;}
        }


        if(c!=0)
              printf("Boring!\n");

        else
        {

            for(i=0;v[i]!=0;i++)
            {
                if(v[i]!=1)
                      printf("%lld ",v[i]);
                else
                      printf("%lld\n",v[i]);

            }
        }

    }

    return 0;
}
