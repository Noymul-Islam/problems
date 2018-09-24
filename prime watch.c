#include<stdio.h>
#include<string.h>
#include<math.h>
#define size 100000
char arra[size];
void seive();
int main()
{
    seive();

    char ch[30];
    while(gets(ch))
    {
        int a,b,sum=0,z,m,n,i,j;
        m=strlen(ch);
        for(i=0;i<m;i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
                 sum=sum+(ch[i]-96);
            else
            {
                sum=sum+(ch[i]-65+27);

            }
            }

   if(arra[sum]=='1')
             printf("It is a prime word.\n");
   else
     printf("It is not a prime word.\n");

    }
    return 0;
}

void seive()
{
    int m,n,root,a,i,j;
    root=sqrt(size);
    memset(arra,'1',sizeof(arra));
    for(i=2;i<=root;i++)
    {
        if(arra[i]=='1')
        {
            for(j=2;i*j<=size;j++)
            {
                arra[i*j]='0';

            }
        }
    }
}
