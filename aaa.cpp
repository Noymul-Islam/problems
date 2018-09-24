#include<cstdio>

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0,i;
    for( i=1;;i++)
    {
        ans+=i;
        if(ans>=n)
              break;

    }
    printf("%d\n",i);
    return 0;
}
