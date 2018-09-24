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

int main()
{
    double r,x,y,x1,y1;
  int a=5,b=8;

   //printf("%d\n",a+++b);
   // printf("%d %d\n",a,b);
    cin>>r>>x>>y>>x1>>y1;

    double dest=sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
    //cout<<dest;
    double res=ceil((dest)/(r+r));
  cout<<res<<endl;
    return 0;
}
