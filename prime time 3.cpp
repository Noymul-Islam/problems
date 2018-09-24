#include<cstdio>
#include<cstring>
#include<cmath>
#define size 1000000
using namespace std;

char ch[size];
void seive()
{
    int i,j,m,n;
    memset(ch,'1',sizeof(ch));

    ch[0]='0';
    ch[1]='0';
    for(i=4;i<=size;i=i+2)
           ch[i]='0';
     int sq=sqrt(size);
     for(i=3;i<=sq;i=i+2)
     {
         if(ch[i]=='1')
         { for(j=i*i;j<=size;j=j+i)
            ch[j]='0';
         }
     }

}
int main()
{
    seive();
    // 0for(int i=0;i<10000;i++)
        //printf(" %d %c\n",i,ch[i]);
    int arr[10001],k=1;
    for(int i=0;i<10001;i++)
    {
        int c=0;
        int x= i*i +i+ 41;
        if(x<size-1)
        {

            if(ch[x]=='1')
                  arr[i]=k;
        }
        else
        {
            int root =sqrt(x)+1;
            for(int j=2;j<=root;j++)
            {
                if(x%j==0)
                {
                 c++;
                   break;

                }
            }
            if(c==0)
            {
                arr[i]=k;
            }

        }

    }
      int a,b;
     while(scanf("%d %d",&a,&b)==2)
     {

          double res,number=0.00;
         for(int i=a; i<=b; i++)
         {
             if(arr[i]==k)
               number++;
         }
         res=(double)(b-a+1);

    printf("%lf\n",number);
        printf("%0.2lf\n",number/res *100.0+1e-7);



     }

    return 0;
}
