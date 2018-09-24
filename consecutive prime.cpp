#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
#define size 10001
char ch[size];

void seive()
{
   long long int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));

    root=sqrt(size);
    ch[0]='0';
    ch[1]='1';

    for(i=2;i<=root;i++)
    {

        if(ch[i]=='1')
        {
            for(j=2;i*j<=size;j++)
                ch[j*i]='0';


        }

    }

}
int main()
{

    seive();
    long long int n;

    while(scanf("%lld",&n)==1)
    {
       long long  int sum;
        if(n==0)
             {

              break;}
      long long  int c=2;
       long long int tot=0,p=0,s=0;
        if(ch[n]=='1')
               sum=1;
        else
              sum=0;

        for( long long int i=2;i<n;i++)
        {
          if(p!=0&&s==0)
            i=c;
              if(ch[i]=='1')
            {
                tot=tot+i;

                if(tot==n)

                {
                  p=0;
                  s=0;
                   sum++;
                }
                else if(tot<n)
                {
                    s++;
                }
                if(tot>n)
                {
                    tot=0;
                    c++;
                    p++;
                    s=0;
                    while(ch[c]!='1')
                    {
                        c++;

                    }

                }




            }
        }
        printf("%lld\n",sum);


    }



    return 0;
}
