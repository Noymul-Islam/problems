#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
#define size 125000000
#define pf printf
#define  sc scanf
char ch[size];

void seive()
{
    int i,j, m,n ,root;
     root=sqrt(size);
     memset(ch,'1',sizeof(ch));
       ch[0]='0';
         ch[1]='0';
         for(i=2;i<=root;i++)
              for(j=2;i*j<=size;j++)
         {
             ch[i*j]='0';

         }


}
int main()
{
    seive();
    int a,b;
    while(sc("%d %d",&a,&b)!=EOF)
    {
        int number=0, k=0;
        for(int i=a;i<=b;i++)
        {
            int n= (i*i)+i+41;
            if(ch[n]=='1')
                number++;
                else
                     k++;

        }
        double res;
               // res=(double)(number*100)/(double)(k+number);
                 //res=res*100.00;
                 pf("%0.2lf\n",(number)/(b+a-1) *100 +1e-9);

    }
return 0;
}
