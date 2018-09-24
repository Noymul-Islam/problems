#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&&b==0)
              break;
        int i,j,m,n,sum=0;
        for(i=a;i<=b;i++)
        {
            m=sqrt(i);
            n=m*m;
            if(n==i)
                 sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
