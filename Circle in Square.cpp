#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        double r;
        cin>>r;
        double side=r*2;
        double Area=side*side;
        printf("Case %d: %0.2lf\n",cas++,Area-(2*acos(0.0)*r*r));

    }
    return 0;


}
