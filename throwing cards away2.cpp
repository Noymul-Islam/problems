#include<cstdio>
#include<iostream>
using namespace std;

int main()
{

    int n;
    while(cin>>n)
    {
        int res;
        if(n==0)
             break;
        if(n==1)
              printf("1\n");
        else
        {
            int p=1;
            while(p<n)
            {
                p=p*2;
                int c=p%n;
                res=n-c;


            }

        cout<<res<<"\n";
        }
    }
    return 0;
}
