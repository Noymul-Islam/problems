#include<stdio.h>
#include<string.h>
#include<math.h>
#define size 100001
char ch[size];

void seive()
{
    int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));

    ch[0]='0';
    ch[1]='0';
    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;i*j<=size;j++)
            {
                ch[i*j]='0';
            }

        }
    }

}
int main()
{
    seive();
    int a;
    int b,m,n,i,j,c;
    while(scanf("%d",&a)==1)
    {
        m=0;
        n=0;
        c=0;
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
                            m=i;
                            n=j;
                            c++;
                            break;

                        }


                   else if(i+j<a)
                         break;}
                }


            }

        }

              printf("%d\n",c);




    }
    return 0;
}

