#include<cstdio>
#include<cstring>
using namespace std;
void fac();
char factorial[1010][10000];
char f[10000];
int main()
{
    fac();
    int n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    while(scanf("%d",&n)==1)
    {

        int sum=0;
        int len=strlen(factorial[n]);
        for(int i=0;i<len;i++)
        {
            if(factorial[n][i]=='0')
                  continue;
            else
                sum=sum+factorial[n][i]-'0';

        }
        printf("%d\n",sum);


    }
    return 0;
}
void fac()
{
    strcpy(f,"1");
    for(int k=2;k<=1010;k++)
    {
        int i=0;
        int sum=0;
        int len=strlen(f);
        while(i<len)
        {
            sum=sum+(f[i]-'0')*k;
            f[i++]=sum%10+'0';
            sum=sum/10;
        }
        while(sum>0)
        {
            f[i++]=sum%10+'0';
            sum/=10;

        }
        f[i]='\0';
         len=strlen(f);

        for(int i=0;i<len;i++)
             factorial[k][i]=f[i];
         factorial[k][i]='\0';

    }


}
