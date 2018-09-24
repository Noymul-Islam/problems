#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

 int n;

//long long  cost[5000000];
struct data
{
    long long int dist;
    bool operator <(const data &p) const {

           return dist>p.dist;}

};
int main()
{

    while(scanf("%d",&n)==1)
    {
        priority_queue<data>q;
         int i=0;
        if(n==0)
          break;
        //   long long int ar[n];
           long long int num;
           long long int sum=0,cost=0;
           for(int j=0;j<n;j++)
           {
                data v;

               scanf("%lld",&num);
                v.dist=num;
               q.push(v);

           }

           while(!q.empty())
           {
              data first=q.top();
              q.pop();
               data second;

               long long int p1,p2;
               p1= first.dist;

                if(!q.empty())

               { second=q.top();
               q.pop();
               p2=second.dist;
                //printf("%lld %lld\n",first,second);
                cost =cost +p1+p2;
                sum=p1+p2;
                data u;
                 u.dist=sum;
                q.push(u);
                }
                //else
                //cost=cost+p1;



           }
           printf("%lld\n",cost);
    }

    return 0;
}
