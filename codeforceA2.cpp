#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using  namespace std;
int main()
{
    int  n, s,sum=0,number=0;
    while(scanf("%d %d",&n,&s)==2)
    {

   int arr[n];
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);

    }
    sort(arr,arr+n);

      for(int i=0;i<n;i++)
{
    if(i!=n-1)
     sum=sum+arr[i] ;

   if(sum>s)
   {

    number++;
   break;
   }
}


     if(number>0)
      printf("NO\n");
      else
         printf("YES\n");
   sum=0;
   number =0;
    }
return 0;
}

