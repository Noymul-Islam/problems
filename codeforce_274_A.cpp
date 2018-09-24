#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int main()
{

    int ar[3];

    for(int i=0;i<3;i++)
     cin>>ar[i];
    int a=ar[0]*ar[1]*ar[2];
    int b=ar[0]+ar[1]+ar[2];
    int c=(ar[0]+ar[1])*ar[2];
    int d=(ar[0]*ar[1])+ar[2];
    int e=ar[0]*(ar[1]+ar[2]);
    int f=ar[0]+(ar[1]*ar[2]);

    int max1=max(a,b);
    int max2=max(max1,c);
    int max3=max(max2,d);
     int max4=max(max3,e);
     int max5=max(max4,f);
     printf("%d\n",max5);

    return 0;
}
