#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
         scanf("%d",&a[i]);
           int count=0;
          //sort(a,a+n);
          for(int i=0;i<n;i++)
          {
             a[i]= a[i]+k;
              if(a[i]<=5)
                 count++;
          }
          int res=count/3;
          printf("%d\n",res);

    return 0;
}
