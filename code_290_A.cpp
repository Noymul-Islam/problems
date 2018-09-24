#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
#include<map>
#include<sstream>
#include<stack>

using namespace std;
/*If it works than it is my code otherwise, I dnt know who the hell wrote it!!!*/
int main()
{
  int n,m;
  cin>>n>>m;

   char ch[n][m];
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
         ch[i][j]='.';

   for(int i=0;i<n;i=i+2)
   {
       for(int j=0;j<m;j++)
            ch[i][j]='#';

   }
   int p=0;
   for(int i=1;i<n;i=i+2)
   {
       if(!p)
       {
           ch[i][m-1]='#';
            p=1;

       }
       else
       {
           ch[i][0]='#';
             p=0;
       }

   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
         printf("%c",ch[i][j]);
       printf("\n");
   }
   //printf("5");
    return 0;
}
