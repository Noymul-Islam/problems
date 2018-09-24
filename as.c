#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b)==2)
    {


        if(a==0&&b==0)
             break;
        int i,j,m,n,k;
        m=sqrt(a);
        n=sqrt(b);

        if(((m*m==a)&&(n*n!=b))||((m*m==a)&&(n*n==b)))
                    j=n-m+1;
        else
             j=n-m;
        printf("%d\n",j);
    }
    return 0;
}
