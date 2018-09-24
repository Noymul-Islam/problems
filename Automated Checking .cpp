#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;
int x[5],y[5];
int main()
{
    while(scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4])==5)
    {
        for(int i=0;i<5;i++)
              cin>>y[i];
                int c=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]==y[i])
            {
                c++;
                break;
            }
        }
        if(c)
             printf("N\n");
        else
             printf("Y\n");

    }
    return 0;
}
