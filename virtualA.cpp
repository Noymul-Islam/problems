#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<queue>
#include<vector>
#include<stack>
#include<algorithm>
#include<map>
using namespace std ;


     struct data
     {

          int index;
          int num;

     };
     bool comp(data p,data q)
     {

         return p.num<q.num;
     }

int main()
{
     int n,k;
     cin>>n>>k;

     data ar[n];
     int sum=0;
     for(int i=0;i<n;i++)
     {
          int day;
         cin>>day;

         ar[i].num=day;
         ar[i].index=i;
           //sum=sum+day;

     }

    sort(ar,ar+n,comp);
      int track[n];
      int p=0;
       int coun=0;
      for( int i=0;i<n;i++)
      {

          if(ar[i].num<=k)
          {
              coun++;
              k=k-ar[i].num;
              track[p++]=ar[i].index;

          }


      }
      if(coun)
      {
          printf("%d\n",coun);
          for(int i=0;i<p;i++)
          {
              if(i==0)
                  printf("%d",track[i]+1);
              else
                  printf(" %d",track[i]+1);


          }
          printf("\n");


      }
      else
        printf("0\n");

    return 0;
}
