#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int m,n,res,res1, res2,test;
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
        res1=(m-2)/3;
        if((m-2)%3!=0)
              res1++;
        res2=(n-2)/3;
        if((n-2)%3!=0)
              res2++;
        res=res1*res2;
        cout<<res<<"\n";

    }

    return 0;
}
