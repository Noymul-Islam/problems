#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>


  using namespace std;

  int main()
  {

      int t;
      cin>>t;
      while(t--)
      {

          int n;
          cin>>n;
          double ar[n],sum=0.0;
          for(int i=0;i<n;i++)
               {cin>>ar[i];
                  sum=sum+(ar[i]/n);


               }

          printf("%.12lf\n",sum);


      }



  }
