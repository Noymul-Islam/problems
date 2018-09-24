
#include<stdio.h>
#include<string.h>
#define sz 1000
int main()
{
    char arr[sz];
    int n,i,sum=0,d,j;
    scanf("%d",&n);
    //printf("%d",sum);
    for(i=0;i<n;i++)
        {
            scanf("%s",arr);
            d=strlen(arr);
            sum=0;
            for(j=0;j<d;j++)
                sum+=arr[j];
            printf("Case %d: %d\n",i+1,sum);
        }

    return 0;
}
