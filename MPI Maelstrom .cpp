#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstring>

using namespace std;

int ar[110][110];
char ch[1000];

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {getchar();
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                ar[i][j]=10000000;
                ar[j][i]=10000000;
                if(i==j)
                    ar[i][j]=0;

            }

        for(int i=2; i<=n; i++)
        {
            int j=1;
            gets(ch);
            int len=strlen(ch);
            int sum=0;
            for(int k=0; k<len; k++)
            {
                if(ch[k]==' ')
                    continue;
                if(ch[k]=='x')
                {
                    j++;
                    sum=0;
                    continue;
                }
                sum=sum*10+ch[k]-'0';
                if(ch[k+1]==' '||k+1==len)
                {
                    ar[i][j]=sum;
                    ar[j][i]=sum;
                       sum=0;
                       j++;

                }



            }

        }
           int c=-1;
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
                for(int j=1; j<=n; j++)
                {
                    if(ar[i][j]>ar[i][k]+ar[k][j])
                    {
                        ar[i][j]=ar[i][k]+ar[k][j];
                    }

                }

        }

        for(int i=2; i<=n; i++)
        {
            if(ar[1][i]>c)
            {
                c=ar[1][i];
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
