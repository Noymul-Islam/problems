#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
char ch[60000];
void seive()
{
    int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));
    ch[0]='0';
    ch[1]='0';
    root=sqrt(60000);
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {for(j=2;j*i<=60000;j++)
        {
          ch[i*j]='0';

        }}
    }


}
int main()
{
    seive();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
              break;
        printf("%d =",n);
        int i,j,m,k;
        if(n<0)
        {n=n*(-1);
          printf(" -1 x");


        }
        int root= sqrt(n);

        for(i=2;i<=root;)
        {
            if(ch[i]=='1')

            {
            while(n%i==0)
            {
                printf(" %d",i);
            n=n/i;

                if(n!=1)
                    printf(" x");

            }
            }

                i++;

            }


        if(n>1)
             printf(" %d",n);

        printf("\n");
    }
    return 0;
}
