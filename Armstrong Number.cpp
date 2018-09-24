#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        m=n;
        int k=n;
        int a,sum=0;
        int count=0;
        while(k>0)
        {
            k=k/10;
            count++;
        }
       // printf("%d\n",count);
        while(n>0)
        {
            a=n%10;
            int b=a;
        for(int i=1;i<count;i++)
        {
            a=a*b;
        }
            //printf("%d\n",a);
            sum+=a;
            n=n/10;

        }
        if(sum==m)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");

    }
    return 0;
}
