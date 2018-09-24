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
    while(scanf("%d",&n)==1)
    {
        int book[n];
        for(int i=0;i<n;i++)
               cin>>book[i];
               cin>>m;
               sort(book,book+n);
                 int price1,price2;
               for(int i=0;i<n-1;i++)
               {
                   int start=i+1;
                     int  end=n-1;
                      while(start<=end)
                      {
                          int mid=(start+end)/2;

                          if(book[mid]+book[i]>m)
                          {
                              end=mid-1;

                          }
                          else if(book[mid]+book[i]<m)
                          {
                              start=mid+1;

                          }
                          else if(book[mid]+book[i]==m)
                          {
                              price1=book[mid];
                              price2=book[i];
                               //k++;
                                break;


                          }


                      }



               }
               printf("Peter should buy books whose prices are %d and %d.\n\n",price2,price1);



    }
    return 0;
}
