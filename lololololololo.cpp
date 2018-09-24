

#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;





int main()
{
    int n;
    cin>>n;
           int co[n+1][2];
        for(int i=1; i<=n; i++)
            cin>>co[i][0]>>co[i][1];

   for(int i=1; i<n; i++)
   {

   for(int j=i+1; j<=n; j++)
{double dest=sqrtf(((co[i][0]-co[j][0])*(co[i][0]-co[j][0]))+((co[i][1]-co[j][1])*(co[i][1]-co[j][1])));
                printf("%lf\n",dest);
}}}
