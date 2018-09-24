#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<queue>

using namespace std;

int main()
{

    int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
       int count=0;

  int sum=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==1)
         sum++;
   }
      int num=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==1)
           {
               num++;
               count++;

               while((arr[i]==arr[i+1])&&i!=n-1)
                 {
                       num++;
                     count++;
                   //
                    //printf("2");
                    i++;
                 }
                         if(sum==num)
                             continue;
                 count++;

           }



       }
       printf("%d\n",count);

    return 0;

}
