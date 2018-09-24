#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;
#define Pi acos(-1)
int main()
{
    double lat1=24.918237*(Pi/180);
    double long1=91830910;
    double lat2=24.918674*(Pi/180);
    double long2=91.831457;
   double lemda=(long2-long1)*(Pi/180);
   double  del=(lat2-lat1)*(Pi/180);

   double a=sin(del/2)*sin(del/2)+cos(lat1)*cos(lat2)*sin(lemda/2)*sin(lemda/2);

   double c=2*atan2(sqrt(a),sqrt(1-a));
   double d=c*6371000;
   printf("%lf\n",d);





    return 0;


}
