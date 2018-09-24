#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<queue>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<cstdio>
using namespace std;
#define pi acos(-1)
queue<int>q,q1;
 vector<int>v[35000];
int main()
{

    int t;
     cin>>t;
     while(t--)
     {
//         memset(par,-1,sizeof(par));
          int n,k,num;
           cin>>num>>k;
            n=1;
             for(int i=1;i<=num;i++)
             {
                 n=n*2;

             }
             //cout<<n;
              int ar[n+1];
         for(int i=1;i<=n;i++)
         {
             int a;
             scanf("%d",&a);
             q.push(a);
             q1.push(i);
             ar[i]=a;


         }
          int first_number,second_number,first_index,second_index;
         while(!q.empty())
         {
           first_number=q.front();
           q.pop();
        //  printf(" First->%d\n",first_number);
                 first_index=q1.front();
                q1.pop();
                if(q.empty())

                    break;

                  second_number=q.front();
                q.pop();
                second_index=q1.front();
                q1.pop();
  // printf(" Second->%d\n",second_number);
             if(first_number>second_number)
             {
                 int trial;
                 trial=first_number-second_number+k;
                 if(trial>=ar[first_index])
                 {
                     //first_number=first_number-1;
                   first_number= ar[first_index];
                 }
                 else
                  first_number=trial;
                 q.push(first_number);
                 q1.push(first_index);
                  v[first_index].push_back(second_index);
             }
             else if(first_number<second_number)
             {
                 // printf("ok-->%d %d\n",first_number,second_number);
    int trial;
               trial   =second_number-first_number+k;
                 if(trial>=ar[second_index])
                 {
                     second_number=ar[second_index];

                 }
                 else
                 second_number=trial;
                q.push(second_number);
                q1.push(second_index);
                v[second_index].push_back(first_index);
             }
             else if(first_number==second_number)
             {

                 //q.push(k);
                 if(first_index<second_index)
                 {if(ar[first_index]<=k)
                 {
                     first_number=ar[first_index];
                     q.push(first_number);
                 }
                 else
                  q.push(k);

                     q1.push(first_index);
                  v[first_index].push_back(second_index);
                 }
                 else
                 {
                     if(k>=ar[second_index])
                     {
                         second_number=ar[second_index];
                         q.push(second_number);


                     }
                      else
                       q.push(k);
                     q1.push(second_index);
                     v[second_index].push_back(first_index);

                 }
             }
         }
        printf("%d\n",first_index);
       // printf("%d\n",v[first_index].size());
       // printf("%d\n",)
         for(int j=0;j<v[first_index].size();j++)
         {

             if(j==0)
              printf("%d",v[first_index][j]);
              else
              printf(" %d",v[first_index][j]);

         }
         printf("\n");
  for(int i=0;i<=n;i++)
     v[i].clear();
     }
}
