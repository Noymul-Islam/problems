#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    while(gets(ch))
    {
        if(ch[0]=='0')
              break;

        long long int a,b,m,n,sum=0,depth=0;
        int i,j;
        for(i=0;ch[i]!='\0';i++)
        {
            sum=sum+(ch[i]-'0');

        }
        a=sum%9;
        if(a==0)
        {
            if(sum<10)
            {
                printf("9 is a multiple of 9 and has 9-degree 1.\n");
            }
            else
            {

            }


        }




    }


}
