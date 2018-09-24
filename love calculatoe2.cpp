#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    char ch1[100];
    while(gets(ch1))
    {

        char ch2[100];
        gets(ch2);
        int i,b,j,m,n,a,sum1=0,sum2=0,k,p;
        double res;
        m=strlen(ch1);
        n=strlen(ch2);
        for(i=0;i<m;i++)
        {
            if(ch1[i]>='a'&&ch1[i]<='z')
            {
                sum1=sum1+ (ch1[i]-96);

            }
            else if(ch1[i]>='A'&&ch1[i]<='Z')
            {
                sum1=sum1+ (ch1[i]-64);
            }

        }
        while(sum1>9)
        {

            a=sum1%10;
            sum1=sum1/10;
            sum1=sum1+a;

        }
        for(i=0;i<n;i++)
        {
            if(ch2[i]>='a'&&ch2[i]<='z')
                sum2=sum2+(ch2[i]-96);
            else if(ch2[i]>='A'&&ch2[i]<='Z')
            {
                sum2=sum2+(ch2[i]-64);
            }


        }
        while(sum2>9)
        {

            b=sum2%10;
            sum2=sum2/10;
            sum2=sum2+b;
        }


     if(sum1==0||sum2==0)
         printf("0.00 %\n");
       else if(sum1<sum2)
        res= ((double)sum1*100)/(double)sum2;
        else
        res=((double)sum2*100)/(double)sum1;
        printf("%0.2lf %%\n",res);
    }

    return 0;

}
