


#include<stdio.h>
#include<string.h>
int main()
{
long long a,b,c,d,e,i,l,leap,hulu,bulu,nl=0,n4,n100,n400,n55,n15;
char s[100000];
while(gets(s))
{
n4=0;
n100=0;
n400=0;
n15=0;
n55=0;
leap=0;
hulu=0;
bulu=0;
l=strlen(s);
for(i=0;i<l;i++)
    {
    a=n4*10+(s[i]-'0');
    n4=a%4;
    }
if(a==0)
    {
    for(i=0;i<l;i++)
        {
        b=n100*10+(s[i]-'0');
        n100=b%100;
        }
    if(b==0)
        {
        for(i=0;i<l;i++)
            {
            c=n400*10+(s[i]-'0');
            n400=c%400;
            }
        if(n400==0)
        leap=1;
        }
    else
    leap=1;
    }
for(i=0;i<l;i++)
    {
    d=n15*10+(s[i]-'0');
    n15=d%15;
    }
if(n15==0)
hulu=1;
if(leap==1)
    {
    for(i=0;i<l;i++)
        {
        e=n55*10+(s[i]-'0');
        n55=e%55;
        }
    if(n55==0)
    bulu=1;
    }
if(nl!=0)
printf("\n");
if(leap==1)
printf("This is leap year.\n");
if(hulu==1)
printf("This is huluculu festival year.\n");
if(bulu==1)
printf("This is bulukulu festival year.\n");
if(leap==0 && hulu==0 && bulu==0)
printf("This is an ordinary year.\n");
nl++;
}
return 0;
}
