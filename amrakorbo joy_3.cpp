#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
     int n,m;
     while(scanf("%d %d",&n,&m)==2)
     {
         if(n==0&&m==0)
               break;
            //   if(n)
         int dragon[n];
         int knigts[m];
         for(int i=0;i<n;i++)
              cin>>dragon[i];
         for(int i=0;i<m;i++)
              cin>>knigts[i];

         sort(dragon,dragon+n);
         sort(knigts,knigts+m);
         int ar[n];
         memset(ar,0,sizeof(ar));
           int sum=0,num=0;
           int k=0;
         for(int i=0;i<m;i++)
         {
            // if(i==n)
              //     break;
             if(knigts[i]>=dragon[k])
             {
                 sum=sum+knigts[i];
                 num++;
                 k++;
                 if(num==n)
                      break;


             }
             /*int start=0;
             int end=n-1;
             while(start<=end)
             {
                 int mid=(start+end)/2;

                 if(dragon[mid]<=knigts[i]&&ar[i]!=1)
                 {
                     printf("yes");
                    num++;
                     ar[i]=1;
                     sum=sum+knigts[i];
                     break;
                 }

                 else if(dragon[mid]<=knigts[i]&&ar[i]==1)
                 {
                 //   num++;
                   //  ar[i]=1;
                     //sum=sum+knigts[i];
                     //break;
                     end=mid-1;
                 }
                 else
                 {
                     start=mid+1;

                 }


             }*/


         }
         if(num==n)
         printf("%d\n",sum);
          else
            printf("Loowater is doomed!\n");

     }
    return 0;
}
