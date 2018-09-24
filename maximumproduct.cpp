#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
#include<algorithm>

using namespace std;


vector<long long int>v,v1;
int  main()

//printf("%d",1);
{


    long long int  n,cs=1;

    while(scanf("%lld",&n)==1)
    {
        long long int  ar[1000];
        for(long long int  i=0;i<n;i++)
              cin>>ar[i];
             long long  int p=0;
       // v.push_back(ar[0]);
       if(n==1&&ar[n-1]<=0)
         {printf("Case #%lld: The maximum product is 0.\n\n",cs++);
           continue;
         }
         else if(n==1&&ar[n-1]>0)
         {
             printf("Case #%lld: The maximum product is %lld.\n\n",cs++,ar[n-1]);
             continue;
         }

         /*else if(n==2)
         {
             printf("Case #%lld: The maximum product is %lld.\n\n",cs++,max(p,ar[0]*ar[1]));
             continue;
         }*/
     //  v1.push_back(ar[0]*ar[1]);
        for(long long int  i=0;i<n-1;i++)
        {
              long long product=1*ar[i];
            //long long int  l=v.size();
            for(long long int  j=i+1;j<n;j++)
            {
                product=product*ar[j];
                v.push_back(product);


            }
           //push_back(ar[i]);

        }
        sort(v.begin(),v.end());
        sort(ar,ar+n);
                //sort(v1.begin(),v1.end());
        long long int  len=v.size();
       // long long int  len1=v1.size();
        //for(long long int  i=0;i<len1;i++)
        //     prlong long int f("%lld\n",v1[i]);
        if(v[len-1]<0&&ar[n-1]>=0)
        printf("Case #%lld: The maximum product is %lld.\n\n",cs++,ar[n-1]);

       else   if(v[len-1]==0)

            printf("Case #%lld: The maximum product is %lld.\n\n",cs++,ar[n-1]);
        else if(v[len-1]<0)
          printf("Case #%lld: The maximum product is 0.\n\n",cs++);
        else
        printf("Case #%lld: The maximum product is %lld.\n\n",cs++,v[len-1]);
        v.clear();
        //v1.clear();
    }
    return 0;

}
