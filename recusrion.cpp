#include<cstdio>
using namespace std;
int fin(int n)
{ int i=10;
    if(n==0)
      return 1;
    if(n==1)
    i=20;

    printf("Brfore function calling: %d\n",i);
int    res=fin(n-1)*n;
    printf("After function calling: %d\n",i);
    return res;
}

int main()
{
    int res= fin(10);
    return 0;
}
