#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int h,m,s;



        scanf("%d:%d",&h,&m);
        int min=(60-m)%60;
        //int sec=(60-s)%60;
        int hr=(12-h)%12;
        //if(sec)
          // min=min-1;
        if(min)
           hr=hr-1;
        //if(!min||min<0)
          // min=min+60;
        if(!hr||hr<0)
           hr=hr+12;

        if(hr<10)
        printf("0%d:",hr);
        else
        printf("%d:",hr);
        if(min<10)
        printf("0%d\n",min);
        else
        printf("%d\n",min);
        //printf("%d:%d\n",hr,min);

    }

}
