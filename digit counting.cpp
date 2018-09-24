#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{

    long long int n,b;
    while(scanf("%lld",&n)==1)
    {

 for(b=1;b<=n;b++)
 {


        long long int seq[10],k;
        memset(seq,0,sizeof(seq));
        scanf("%lld",&k);

        long long int i,j,m;

        for(i=1;i<=k;i++)
        {
            j=i;
            if(j<10)
                seq[j]++;

            else if(j>9)
            {
                while(j>9)
                {
                    m=j%10;
                    seq[m]++;
                    j=j/10;


                }

              seq[j]++;

            }



        }
        for(i=0;i<10;i++)
        {
            if(i!=9)
                  printf("%lld ",seq[i]);
            else
                printf("%lld\n",seq[i]);

        }

 }
    }
return 0;

}
