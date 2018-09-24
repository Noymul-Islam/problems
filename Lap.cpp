#include<cstdio>

using namespace std;

int main()
{
    int first,second;
    while(scanf("%d %d",&first,&second)==2)
    {
        int dist=second;
        int count=1;
        int a=0,b=0;
        while(1)
        {
            a+=first;
            b+=second;

            if(b-a>=dist)
                  break;
                  count++;

        }
        printf("%d\n",count);

    }
    return 0;
}
