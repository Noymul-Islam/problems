#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
#define size 5000001
char ch[size];
void seive()
{long long int i,j,m,n,root;

    root=sqrt(size);

memset(ch,'1',sizeof(ch));
    ch[0]='0';

    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
            for(j=2;i*j<=size;j++)

                ch[i*j]='0';

    }

}
int main()
{
    seive();
    long long int T;
    while(scanf("%lld",&T)==1)
    {
        for(long long d=1;d<=T;d++)
       {

        long long int i,j,k,sum=0,sum1=0,a,b;
        scanf("%lld %lld",&a,&b);

            for(i=a;i<=b;i++)
            {
             for(j=1;j<=i-2;j++)
             {
                 if(ch[j]=='1')
                 {
                     for(k=j+1;k<=i-1;k++)
                     {
                         if(ch[k]=='1')
                         {
                             if(k+j==i)
                                sum=sum+2;



                         }


                     }


                 }

             }
            // printf("%lld\n",sum);
                           sum1=sum1+pow(sum,2);
                           sum=0;





            }



                    printf("Case %lld: %lld\n",d,sum1);

        }



    }

    return 0;
}
