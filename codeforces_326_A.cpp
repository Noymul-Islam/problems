#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<map>

using namespace std;

int main()
{
  int n,a,p,temp=10000000,index;
  scanf("%d",&n);
  bool yes=false;

  int meat[n],price[n];
    int sum=0;
  for(int i=0;i<n;i++)
  {
      scanf("%d %d",&meat[i],&price[i]);
      if(i>0&&price[i]>price[i-1])
      {
           price[i]=price[i-1];
          sum=sum+price[i]*meat[i];

      }
      else
         sum=sum+price[i]*meat[i];




  }

  cout<<sum<<endl;
    return 0;

}
