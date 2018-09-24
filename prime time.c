#include<stdio.h>
#include<math.h>
#include<string.h>

#define size 100012000
char ch[size];
void seive()
{
    int i,j,m,n,root;
    root=sqrt(size);
    memset(ch,'1',sizeof(ch));
    ch[0]='0';
    ch[1]='0';
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {for(j=2;i*j<=size;j++)

        ch[i*j]='0';
        }
    }

}
int main()
{
    seive();

    double i,j,a,b;
    while(scanf("%lf %lf",&a,&b)==2)
    {
        double m=0,n=0,k;
        int sum;
        double res,rek;

        for(i=a;i<=b;i++)
        {


            sum=(i*i)+i+41;
            if(ch[sum]=='1')
                  m++;
            else
                 n++;




        res=((m*100)/(m+n));}

        printf("%0.2lf\n",res);

    }
    return 0;
}
