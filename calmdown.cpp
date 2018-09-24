#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int cs=1;
    int t;
    cin>>t;
    while(t--)
    {
 double  R,n;
    cin>>R>>n;
    double first=0,last=1000;

    double mid=(first+last)/2;
    for(int i=0;i<200;i++)
    {
       if(mid*n>R)
       {
           last=mid;
           mid=(first+last)/2;


       }

       else {

        first=mid;
        mid=(first+last)/2;

       }




    }

        cout<<mid<<endl;

    }

    return 0;
}
