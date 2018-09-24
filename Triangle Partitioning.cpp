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
        double AB,AC,BC,R,AD,AE,DE;

        cin>>AB>>AC>>BC>>R;
        double S=(AB+AC+BC)/2;
        double totalArea=sqrt(S*(S-AB)*(S-AC)*(S-BC));

    double low=0,heigh=AB,mid;
    while(1)
    {

        mid=(low+heigh)/2;


        AE=(mid/AB)*AC;
        DE=(mid/AB)*BC;

        double s=(mid+AE+DE)/2;
         double triArea=sqrt(s*(s-mid)*(s-AE)*(s-DE));
         double trapiArea=totalArea-triArea;
         double r=(triArea/trapiArea);
         if(abs(R-r)<=0.0000001||r==R)
                     break;
         else if(r>R)
         {
             heigh=mid;
         }
         else
         low =mid;
    }

         printf("Case %d: %0.9lf\n",cas++,mid);

    }

    return 0;
}
/*

4
100 100 100 2
10 12 14 1
7 8 9 10
8.134 9.098 7.123 5.10
*/
