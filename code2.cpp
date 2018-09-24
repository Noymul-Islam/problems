#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;

int main()
{
    int a[6][6];
     int v[5];
   // vector<int>v;
     int l=1;
    for(int i=0;i<5;i++)
    {
        v[i]=i+1;
       // v.push_back(l);
         l++;
    }
     int n[120];
      int num=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
             scanf("%d",&a[i][j]);
    }



    do

        {
           //printf("%c\n",v[i]);
          // for( i=0;i<v.size();i++)
           //{
               int i=v[0];
               int  j=v[1];
               int  k=v[2];
                int p=v[3];
               int  t=v[4];
               int  sum=(a[i][j]+a[j][i]+a[k][p]+a[p][k])+(a[j][k]+a[k][j]+a[p][t]+a[t][p])+(a[k][p]+a[p][k])+(a[p][t]+a[t][p]);
               n[num++]=sum;

           //}
              //printf("%c",v[i]);
               //i=0;

         //cout<<ch<<"\n";
   //printf("\n");
        }while(next_permutation(v,v+5));
     sort(n,n+120);
      printf("%d\n",n[119]);


    return 0;
}
