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
         ar[0]=-1;
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
int mid=(beg+end)/2;
                while(1)
                {

                    //if(ar[mid-1]>num[i]&&num[i]<ar[mid])

                     // mid=(beg+end)/2;
                    if(ar[mid]==num[i])
                    {
                        printf("%d\n",mid);
                        c++;
                        break;
                    }
                    else if(num[i]>ar[mid]&&num[i]<ar[mid+1])
                    {
                        printf("%d\n",mid+1);
                        break;
                    }
                    /*else if(num[i]>=ar[mid]&&num[i]<ar[mid+1])
                    {
                        printf("%d\n",mid);
                        break;
                    }*/
                    else if(num[i]>ar[mid-1]&&num[i]<ar[mid])
                       {

                           printf("%d\n",mid);
                           c++;
                            break;
                       }
                       else if(num[i]==ar[mid+1])
                       {

                           printf("%d\n",mid+1);
                           c++;
                            break;
                       }
                       else if(num[i]==ar[mid-1])
                          {
                              printf("%d\n",mid-1);
                              break;
                          }
                       else if(num[i]<ar[mid-1])
                       {
                           //printf("1");

                           end=mid-1;
                           mid=(beg+end)/2;

                       }
                       else if(num[i]>ar[mid+1])
                       {

                           beg=mid+1;
                        mid=(beg+end)/2;

                       }


                }



            }
     return 0;
 }
