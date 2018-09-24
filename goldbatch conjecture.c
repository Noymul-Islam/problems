#include<stdio.h>
#include<string.h>
#include<math.h>

#define size 1000005
char ch[size];
seive()
{
    int i,j,m,n,root;

    memset(ch,'1',sizeof(ch));
    ch[0]='0';
    ch[1]='0';
    root=sqrt(size);

    for(i=2;i<=root;i++)
    {
                    if(ch[i]=='1')
        for(j=2;i*j<=size;j++)
        {
            ch[i*j]='0';

        }
    }




}
int main()
{
    seive();

    int a;
    while(scanf("%d",&a)==1)
    {
{
      int i,j,m=0,n=0,b,c=-1,k=0;
        if(a==0)
               break;
              for(i=2;i<=a/2;i++)
        {
            if(ch[i]=='1')
            {
                for(j=a-1;j>=a/2;j--)
                {
                    if(ch[j]=='1')
                    {
                        if(i+j==a)
                        {
                            k++;
                            m=i;
                            n=j;


                         break;}
                       }
                       else if(i+j<a)
                         break;

                    }
                    if(k!=0)
                         break;
                }
            }



           if(m!=0&&n!=0)

        printf("%d = %d + %d\n",a,m,n);
        else
                          printf("Goldbach's conjecture is wrong.\n");}

}
    return 0;

    }
