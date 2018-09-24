#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

int compute(int n)
{
    int j;
    if(n<=100)
    j=compute(n+11);

    else
    return n;

}
int main()
{
    int n,m,k;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        if(n>100)
             printf("f91(%d) = %d\n",n,n-10);
        else
        {

            k=compute(n);
            k=k-11;
            printf("f91(%d) = %d\n",n,k);
      }






    }

    return 0;
}
