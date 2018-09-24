#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std ;
  int main()
 {

     long long int n;
     long long int positive,negative;
     cin>>n;
     if(n%2!=0)
     {
         negative=(n/2)+1;
         positive=n/2;
     }
     else
     {
         negative=n/2;
         positive=n/2;
     }
     long long int ans1,ans2;
     ans1=((negative)*((2*1)+(negative-1)*2))/2;
     ans2=((positive)*((2*2)+(positive-1)*2))/2;
     long long int ans=ans2-ans1;
     cout<<ans<<endl;
 }
