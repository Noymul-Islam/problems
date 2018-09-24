#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

vector<int>G[150];

int main()
{
     int t,cs=1;
     cin>>t;
       char ar[15][15];
     while(t--)
     {
         int n;
         cin>>n;

         for(int i=0;i<n;i++)
            gets(ar[i]);
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
            {
                int track2;
                int track=i*n+j;
                if(i-1>=0)
                {
                   track2=(i-1)*n+j;
                    G[track].push_back(track);

                }
                if(j-1>=0)
                {
                    track2=(i*n)+j-1;
                    G[tarck].push_back(track2);

                }
                if(i+1<n)
                {
                    tarck2=(i+1)*n+j;
                    G[track].push_back(track2);
                }
                if(j+1<n)
                {
                    track2= (i*n)+(j+1);
                    G[track].push_back(track2);
                }

            }

     }


    return 0;
}
