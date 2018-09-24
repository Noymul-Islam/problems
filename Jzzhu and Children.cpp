#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
struct st
{
  int need;
  int position;
};

//queue<int>Q;
//bool comp(st p, st q)
//{
  //  return p.need<q.nQ.peed;


//}
queue<st>Q;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
     st s,k;
    for(int i=0;i<n;i++)
    {
        int p;
         scanf("%d",&p);
        s.need=p;
         s.position=i+1;
         //Q.push(p);
         Q.push(s);

    }
    while(!Q.empty())
    {
         k=Q.front();
         Q.pop();
        // printf("%d\n",k.need);
        if(k.need>m)
        {
            k.need=k.need-m;
            Q.push(k);

    }


    }


  //  sort(a,a+n,comp);
   printf("%d\n",k.position);



    return 0;
}
