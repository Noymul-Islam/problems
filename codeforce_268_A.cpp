#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
     int n;
      scanf("%d",&n);
      int ar[n+1];

      memset(ar,0,sizeof(ar));
      int p,q;
      scanf("%d",&p);
      while(p--)
      {
           int x;
           scanf("%d",&x);
           ar[x]++;



      }
      scanf("%d",&q);

      while(q--)
      {


           int y;
           scanf("%d",&y);
           ar[y]++;
      }
      sort(ar,ar+n+1);
      if(ar[1]==0)
      printf("Oh, my keyboard!\n");
      else
      printf("I become the guy.");

    return 0;
}
