#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
using namespace std;
long long int xx[]= {1,-1,0,0};
long long int yy[]= {0,0,1,-1};
long long int XX[]= {1,-1,0,0,-1,-1,1,1};
long long int YY[]= {0,0,1,-1,1,-1,1,-1};


 int main()
{

    long long int ar[26];
     memset(ar,0,sizeof(ar));
     ar[4]=1;
     ar[8]=1;
     ar[9]=1;
     ar[12]=1;
     ar[13]=1;
     ar[16]=1;
     ar[17]=1;
     ar[18]=1;
     ar[20]=1;
     ar[21]=1;
     ar[22]=1;
     ar[24]=1;
     ar[25]=1;

     long long int t;
     scanf("%lld",&t);
     while(t--)
     {
         long long int a,b;
    cin>>a>>b;
           long long int coun=0;
         if(a<=25&&b<=25)
         {

             for(long long int i=a;i<=b;i++)
                   if(ar[i])
                       coun++;

               printf("%lld\n",coun);
         }
         else if(a>=25&&b>=25)
         {
             long long int res=b-a+1;
             printf("%lld\n",res);


         }

         else
         {
             for(long long int i=a;i<25;i++)
                   if(ar[i])
                     coun++;

             long long int res=b-25+1;
             printf("%lld\n",res+coun);

         }

     }


    return 0;
}
