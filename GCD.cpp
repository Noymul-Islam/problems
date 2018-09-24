#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int GCD(int a, int b)
{
    while(b>0)
    {
        a=a%b;
        a^=b^=a^=b;

    }
    return a;

}

int main()
{

    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
      if(n==0)
          break;
        int sum;
         int i,j;

        // for(i=1;i<n;i++)

             //for(j=i+1;j<=n;j++)
          //   {
            sum=GCD(n,m);






        printf("%d\n",sum);
          }
    return 0;
}
