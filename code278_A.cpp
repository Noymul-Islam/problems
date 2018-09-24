#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;
#define  ll long long

int main()
{
    ll int a;
    cin>>a;
    if(a<=0)
    {
        //ll int res=0-a+8;
        //cout<<res<<endl;
        ll count =0,k=0;
        ll int b;
        while(1)
        {
            a++;
            count++;
            if(a<=0)
             b=a*(-1);
            else
            b=a;
            //cout<<b;
            //break;
            if(b==0)
              {//cout<<"5";
                   continue;}

//cout<<"5";
            while(b!=0)
            {
                if(b%10==8)
                {
                    k++;
                    break;
                }
                b=b/10;
            }
            if(k!=0)
                break;

        }
        cout<<count<<endl;

    }
    else
    {ll int count=0;
      ll int b=a,k=0;
        while(1)
        {
            count++;
            b++;
            ll int c=b;
            while(c!=0)
            {
                if(c%10==8)
                {
                    k++;
                    break;
                }
                c=c/10;

            }
            if(k!=0)
                break;

        }
        cout<<count<<endl;
    }

    return 0;

}
