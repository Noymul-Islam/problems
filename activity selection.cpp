#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std ;

struct activity
{
    int start,end,tag,index;

}track[100];
bool comp(activity p, activity q)
{

    return p.end<q.end;
}

int main()
{
     int n;
     while(scanf("%d",&n)==1)
     {
         for(int i=0;i<n;i++)
         {
             scanf("%d %d",&track[i].start,&track[i].end);
             track[i].index=i;

         }

         sort(track,track+n,comp);
         track[0].tag=1;
         int index=0;
         for(int i=1;i<n;i++)
         {
             if(track[i].start>=track[index].end)
             {
                 index=i;
                 track[i].tag=1;

             }

         }
         for(int i=0;i<n;i++)
         {

             if(track[i].tag==1)

                printf("%dth no activity is choosen\n",track[i].index+1);
         }
     }

    return 0;
}
