#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int ar[n];
        for(int i=0;i<n;i++)
              scanf("%d",&ar[i]);
              printf("Case %d:\n",cs++);
        while(q--)
        {
            int first,last;
            scanf("%d %d",&first,&last);

        int low =0,high=n-1;
          int low2=0,high2=n-1;
         int mid;
         while(low<=high)
         {
              mid=(low+high)/2;
              if(ar[mid]>=first)
                 high=mid-1;
              else
                  low=mid+1;



         }

         while(low2<=high2)
         {
              mid=(low2+high2)/2;
              if(ar[mid]<=last)
                low2=mid+1;
                else
                 high2=mid-1;




         }
         printf("%d\n",high2-low+1);






        }



    }

    return 0;
}
