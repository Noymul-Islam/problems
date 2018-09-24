#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp (const void *i, const void *j);

int main()
{

    int a,z;
    while(scanf("%d",&a)==1)
    {

      for(z=1;z<=a;z++)
      {


        int m,n,c,i,j,k, median,sum=0;
        scanf("%d",&n);
        int b[n];
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        qsort(b,n,sizeof(int),comp);

        if(n%2!=0)
        {
            k=n/2;
            median=b[k];
        }
        else
        {
            k=n/2;
            median=((b[k]+b[k-1])/2);

        }
        for(i=0;i<n;i++)
            sum=sum+abs(median-b[i]);

        printf("%d\n",sum);
    }}
    return 0;
}
int comp(const void *i, const void *j)
{
    return *(int*)i-*(int*)j;
}
