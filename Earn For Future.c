#include<stdio.h>

int main()
{
 int a,b;
 while(scanf("%d",&a)==1)
 {
     for(b=1;b<=a;b++)
     {
         int n,i,j;
         scanf("%d",&n);

         long long int c[n],k;

         for(i=0;i<n;i++)
         {
             scanf("%lld",&c[i]);
         }
         for(i=0;i<n-1;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if(c[i]<c[j])
                 {
                     k=c[j];
                     c[j]=c[i];
                     c[i]=k;

                 }

             }

         }

         printf("Case %d: %lld\n",b,c[0]);
     }
 }
    return 0;
}
