#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n-1];
          int sum=0,a,b;
          //memset(ar,0,sizeof(ar));
        for(int i=0;i<n-1;i++)
        {
            scanf("%d %d",&a,&b);
            sum=sum+(a-b);
        //printf("%d\n",sum);
            ar[i]=sum;

        }
        sort(ar,ar+n-1);
        printf("Case %d: %d\n",cs++,ar[n-2]);


    }

    return 0;
}
