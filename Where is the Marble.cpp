#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    int n,q,cs=1;
    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0&&q==0)
               break;
        int ar[n];
        for(int i=0;i<n;i++)
               cin>>ar[i];
                //ar[0]=-1;
                sort(ar,ar+n);
                printf("CASE# %d:\n",cs++);
        while(q--)
        { int num;
         cin>>num;
         int start=0,end=n-1;
                   int c,k=0;
    int mid;

     //int  res=lower_bound(ar,ar+n,num);
     //printf("%d\n",res);
           while(start<=end)
           {
                mid=(start+end)/2;

               if(ar[mid]>=num)
               {
                   end=mid-1;


               }
               else if(ar[mid]<num)
               {
                    start=mid+1;


               }
               //if(ar[mid]==num)
               //{
                 //  k++;
                   // c=mid;
                     //break;

               //}


           }
          // printf("%d\n",mid);
           if(ar[mid]==num)
              //printf("%d  %d\n",mid,ar[mid]);

              printf("%d found at %d\n",num,mid+1);
               else if(ar[mid+1]==num)
                printf("%d found at %d\n",num,mid+2);
              else
                 printf("%d not found\n",num);




        }

    }
    return 0;

}
