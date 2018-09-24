#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char ch[1000];
    while(gets(ch))
    {
        if(ch[0]=='0')
              break;
         long long int i,j,m,n,k,dec=0;
         m=strlen(ch);
         for(i=m-1,k=1;i>=0;i--,k++)
         {
             n=ch[i]-'0';
             dec=dec+(n*(pow(2,k)-1));


         }

        printf("%lld\n",dec);

    }
    return 0;

}
