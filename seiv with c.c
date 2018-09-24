#include<stdio.h>
#include<math.h>
#define  size  1000000000
int ara[size];
void seive()
{

    int i,j,root;
    for(i=2;i<size;i++)
        ara[i]=1;

    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(ara[i]==1)
        {

            for(j=2;i*j<=size;j++)
                ara[i*j]=0;
        }

    }
}
int prime(int n)
{
    int i;
    if(n<2)
         return 0;
    return ara[n];
}
int main()
{

    int n,m;
    seive();
    while(scanf("%d",&n)==1)
    {
        if(n==0)
              break;
              if(1==prime(n))
                printf("%d is a prime number\n",n);
              else
                 printf("%d is not a prime number \n",n);


    }
    return 0;
}
