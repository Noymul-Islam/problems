#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
/*if it works than its Noymul Islam Chowdhury shorot's code
  otherwise I dont know who wrote it */

 //vector<int>v;
   int ar[1000001];
 int divisor(int n);

 int main()
 {
     int f0=1,f1,p=-1;
      ar[++p]=f0;
     for(int i=0;;)
     {
         f1=f0+divisor(f0);
         f0=f1;
         //v.push_back(f1);
         ar[++p]=f1;
         if(f1>1000000)
              break;


     }
     int cs=1;
     int a,b,t;
     cin>>t;
     while(t--)
     {scanf("%d %d",&a,&b);
     {
         //int res=upper_bound(ar,ar+p+1,b)-lower_bound(ar,ar+p+1,a);
         printf("Case %d: %d\n",cs++,res);

     }
     }
     return 0;
 }
 int divisor(int n)
 {
     int count=0;

     int root=sqrt(n);

     for(int i=1;i<=root;i++)
     {

         if(i*i==n)
              count++;

              else if(n%i==0)
              {
                  count=count+2;

              }

     }
     return count;
 }

