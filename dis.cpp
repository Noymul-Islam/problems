#include<bits/stdc++.h>

using namespace std;

int main()
{
    double mA=6;
    double mB=5;
    while(mA>=1.0&&mB>=1.0)
    {
        double dist=(mA*10)/(mA+mB);
        printf("%lf\n",dist);
        mA=mA-0.5;
        mB=mB-0.5;

    }


    return 0;
}
