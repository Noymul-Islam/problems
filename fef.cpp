#include<cstring>
#include<cstdio>
#include<iostream>

using namespace std;

 int main()
 {
      int n;
      scanf("%d",&n);
      int ar[n+1];
      ar[0]=0;

      for(int i=1;i<=n;i++)
         {
             int a;
             scanf("%d",&a);
             ar[i]=ar[i-1]+a;

         }
         int m;
         cin>>m;
         int num[m];
         for(int i=0;i<m;i++)
            cin>>num[i];

            for(int i=0;i<m;i++)
            {

               int  beg=1;
               int end=n;
                int c=0;

                while(beg<=end)
                {
                     int mid=(beg+end)/2;
                    if(ar[mid]==num[i])
                    {
                        printf("%d",mid);
                        c++;
                        break;
                    }
                    else if(num[i]>ar[mid-1]&&num[i]<ar[mid])
                       {

                           printf("%d\n",mid);
                           c++;
                            break;
                       }
                       else if(num[i]<ar[mid-1])
                       {
                           beg=1;
                           end=mid-1;

                       }
                       else if(num[i]>ar[mid+1])
                       {

                           beg=mid+1;
                        end =n;

                       }

 if(c!=0)
   break;
   printf("NO");
                }



            }
     return 0;
 }

