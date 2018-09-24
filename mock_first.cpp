#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
//int ar[100000];
int main()
{
    int t,cs=1;
    cin>>t;
    //scanf("%d",&t);
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>ar,ar1;
     int num=0;
    for(int i=0;i<n;i++)
       {
          // printf("55");
           int k;
           cin>>k;
           ar.push_back(k);
       }
       for(int i=0;i<n;i++)
         {
            // printf("10");
             int k;
             cin>>k;
             ar1.push_back(k);
         }
         for(int i=0;i<n;i++)
         {
              int c=0;
             if(ar[i]==ar1[i])
                 {
                     i++;
                     continue;
                 }
                 else if(ar[i]!=ar1[i])
                 {
                     int z=ar[i];
                   int m=n-(i);
                   num=num+2;
                  // int p=ar[i];
                    ar.erase(ar.end()-m-1);
                     int p=ar.size();
                   for(int j=0;j<n;j++)
                   {
                       if(z==ar1[j])
                       {int m=n-(j);
                       ar1.erase(ar1.end()-m-1);
                       n=p;
                        break;
                       }
                   }
                    if(ar==ar1)
                    {
                        c++;
                        break;

                    }

                 }
                 //if(c!=0)
                   //break;
                   i=0;

             /*for(int j=0;j<n;j++)
             {

                 else if(ar[i]!=ar[j])
                 {
                     num=num+2;
                     int m=n-i;
                      ar.erase(ar.end()-m);
                      for(int k=j+1)

                 }

             }*/


         }
         printf("%d\n",num);



    }
    return 0;
}
