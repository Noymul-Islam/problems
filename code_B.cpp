#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int main()
{


    int n,m,k;
     int count =0;
     scanf("%d %d %d",&n,&m,&k);
    vector<int>ar[m+1];

     for(int i=0;i<m+1;i++)
     {
        int x;
        scanf("%d",&x);

         int p=0;
        while(x!=0)
        {
       int res=x%2;
            ar[i].push_back(res);
             //printf("%d",res);

            x=x/2;
      p++;


        }
        int z=32-p;
        while(z!=0)
        {

            ar[i].push_back(0);
            z--;

        }

       // printf("\n");



     }
      int number=0;
     for(int i=0;i<m;i++)
     {

         count=0;
         if(ar[m].size()>=ar[i].size())
         {
             for(int j=ar[i].size()-1;j>=0;j--)
             {
                 if(ar[i][j]!=ar[m][j])
                    count++;


             }
             if(count<=k)
                  number++;

         }
         else
         {
             for(int j=ar[m].size()-1;j>=0;j--)
             {

                 if(ar[i][j]!=ar[m][j])
                    count++;

             }
             if(count<=k)
                number++;

         }



     }


    printf("%d\n",number);
   /* for(int i=0;i<m+1;i++)
       {
           for(int j=0;j<ar[i].size();j++)
              printf("%d",ar[i][j]);
              printf("\n");


       }*/
    ar[m+1].clear();

     return 0;
}
