#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
       int x1,y1,x4,y4;

       cin>>x1>>y1>>x4>>y4;
       int x2=x1;
       int y2=y4;
       int x3=x4;
       int y3=y1;
       int num;
       cin>>num;
       printf("Case %d:\n",cs++);
       while(num--)
       {
           int x,y;
           cin>>x>>y;
           if((x>x1&&x<x4)&&(y>y1&&y<y4))
           printf("Yes\n");
           else

           printf("No\n");

       }

    }

    return 0;
}
