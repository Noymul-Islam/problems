#include<stdio.h>
#include<math.h>
#include<string.h>

#define size 1001
char ch[size];

void seive()
{
    int i,j,m,n,root;
    root=sqrt(size);
    memset(ch,'1',sizeof(ch));
    ch[0]='0';
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;i*j<=size;j++)
            ch[i*j]='0';
    }}

}
int main()
{
    seive();
    int n,c;
    while(scanf("%d %d",&n,&c)==2)
    {
        printf("%d %d:",n,c);
        int i,j,m,a,b,count=0,prime[n],k=0,cent;
        for(i=1;i<=n;i++)
        {
            if(ch[i]=='1')
            {
                prime[k]=i;
                count++;
                k++;
            }
        }


        if(count%2==0)
            c=c*2;
        else
             c=(c*2)-1;
        if(c>count)
        {for(i=0;i<k;i++)
            printf(" %d",prime[i]);

        }
        else
        {
            cent=(count-c)/2;
            for(i=cent;i<count-cent;i++)
                printf(" %d",prime[i]);
        }
        printf("\n\n");
    }

    return 0;
}
