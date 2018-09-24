#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

struct data
{
    int num,index;


}ar[1000];

struct track
{
    int from;
     int to;

}ar1[1000];

bool comp(data p,data q)
{
    return p.num<q.num;
}
int main()
{
     int n,k,dif,move,z;

     cin>>n>>k;
     //int ar[n];
       int sum=0,take;
     for(int i=0;i<n;i++)
     {
         cin>>take;
         ar[i].index=i+1;
         ar[i].num=take;
         sum=sum+take;


     }
     sort(ar,ar+n,comp);
 int no=0;
    // printf("i");
     int maxdif=ar[n-1].num-ar[0].num;
     if(ar[n-1].num==ar[0].num)
    {
        no++;
     printf("0 0\n");}
    else if(sum%n==0)
     {
         //printf("0");

         //int maxdif=ar[n-1].num-ar[0].num;
         //int max1=ar[n-1].num-ar[0].num;
         move=0;
         int p=0;
         while(k--)
         {
             ar[n-1].num--;
             ar[0].num++;
             ar1[p].from=ar[n-1].index;
             ar1[p++].to=ar[0].index;
              move++;
               sort(ar,ar+n,comp);
               if((ar[0].num==ar[n-1].num)||(ar[n-1].num-ar[0].num==1))
                  break;



         }
         z=p;

         dif=ar[n-1].num-ar[0].num;

     }


     else
     {




         //move=maxdif-dif;
        move=0;



         //int k=move;
         int p=0;
         while(k--)
         {
             ar[n-1].num--;
             ar[0].num++;
           ar1[p].from=ar[n-1].index;
           ar1[p++].to=ar[0].index;
             move++;
             sort(ar,ar+n,comp);
             if((ar[n-1].num==ar[0].num)||(ar[n-1].num-ar[0].num==1))
             break;


         }
         dif=ar[n-1].num-ar[0].num;
         z=p;


     /*else
       {int p=0;
       while(k--)
         {
             ar[n-1].num--;
             ar[0].num++;
           ar1[p++].from=ar[n-1].index;
           ar1[p++].to=ar[0].index;

             sort(ar,ar+n,comp);
         }
       z=p;

       }*/}

if(no==0)
{


printf("%d %d\n",dif,move);
for(int i=0;i<z;i++)
{
    printf("%d %d\n",ar1[i].from,ar1[i].to);
}


}

    return 0;
}
