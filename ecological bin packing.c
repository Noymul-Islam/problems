#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 1000000000000
char ara[size];
void seive();

int main()
{
    seive();
    int a;
    while(scanf("%d",&a)==1)
    {

    if(a==0)
          break;
          printf("%d = ",a);
     if(a<0)
     {
         a=a*(-1);
         printf("-1 * ");
     }
     int m,n,i,j;
     m=(a/2)+1;
     for(i=2;i<=m;i++)
     {
         if(ara[i]=='1')
         {
             while(a%i==0)
             {
                 n=a/i;
                 printf("%d",i);
                 if(n!=1)
                     printf(" * ");


                    a=a/i;

             }


         }

     }


        printf("\n");

    }
    return 0;
}
void seive()
{
    int i,j,m,n, root;
    memset(ara,'1',sizeof(ara));

    ara[0]='0';
    ara[1]='0';

    for(i=2;i<=root;i++)
    {

        if(ara[i]=='1')
        {
            for(j=2;i*j<=size;j++)
                ara[i*j]='0';
        }
    }


}

