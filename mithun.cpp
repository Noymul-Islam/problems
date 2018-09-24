
#include<stdio.h>

int main()
{
   long long int i,j,t,sum,val;
    char str[100];

    while(scanf("%lld",&t)==1)
    {

    for(i=1;i<=t;++i)
    {
        scanf(" %[^\n]",str);

        for(j=0,sum=0,val=0;str[j]!='\0';++j)
        {
            if(str[j]=='O')
            ++sum;

            if(str[j]=='X')
            sum=0;

            val+=sum;
        }

        printf("%lld\n",val);
    }

    }

    return 0;
}

