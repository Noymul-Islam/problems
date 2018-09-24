#include<cstdio>
#include<cstring>
#include<cmath>

#define size 1000000
using namespace std;

char ch[size];
void seive()
{
    int i,j,m,root;
    memset(ch,'1',sizeof(ch));
     ch[0]='0';
      ch[1]='0';
    root=sqrt(size);
    for(i=2;i<=root;i++)
    {
        for(j=2;i*j<=size;j++)
              ch[i*j]='0';
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
         double number=0.00,res;
         for(int i=a; i<=b; i++)
         {
             if(arr[i]==k)
               number ++;
         }
         res=(double)(b-a+1);
    printf("%lf\n",number);
        printf("%0.2lf\n",number/res *100.0+1e-7);



     }

    return 0;
}
