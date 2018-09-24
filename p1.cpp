#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>

using namespace std;
int xx[]={1,-1,0,0};
int yy[]={0,0,1,-1};
int XX[]={1,-1,0,0,-1,-1,1,1};
 int YY[]={0,0,1,-1,1,-1,1,-1};

 int main()
 {

   int t,cs=1;
    cin>>t;
     while(t--)
    {
          int a,b,c,n;

          cin>>a>>b>>c>>n;

          if(abs(b-a)==abs(c-b))
          {
              int num=a+(n-1)*(b-a);

              printf("Case %d: %d\n",cs++,num);


          }
          else
               printf("Case %d: Error\n",cs++);



    }
     return 0;
 }
