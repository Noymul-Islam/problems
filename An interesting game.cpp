#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int  T;
     scanf("%d",&T);
      int p=1;
     while(T--)
     {
         int n,k,x;
          scanf("%d %d %d",&n,&k,&x);
          int sum=0;
          //int ar[n+1];
          for(int i=1;i<=n;i++)
             sum=sum+i;
          for(int i=x;i<=x+k-1;i++)
          {

              sum=sum-i;
          }
         printf("Case %d: %d\n",p++,sum);

     }
    return 0;
}
