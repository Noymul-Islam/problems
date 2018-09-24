#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#include<cstring>

using namespace std;
#define size 1000000
void init(int node , int b , int e);
//data query()
 int ar[size];
 struct data
 {
     int length,width,area;

 }tree[4*size];

 int main()
 {
      int t,cases=1;
      scanf("%d",&t);
      while(t--)
      {
          memset(tree,0,sizeof(tree));
          int num;
          scanf("%d",&num);
          for(int i=1;i<=num;i++)
            scanf("%d",&ar[i]);
            init(1,1,num);
            printf("%d\n",tree[1].area);



      }

     return 0;
 }

 void init(int node , int b ,int e)
 {

     if(b==e)
     {
         //printf("1\n");

         tree[node].area=ar[b]*1;
         printf("initial %d\n\n",tree[node].area);
         //tree[node].width=1;
         //tree[node].area=tree[node].length*tree[node].width;
         return ;

     }
     int left=node*2;
     int right =left+1;
     int mid=(b+e)/2;
     init(left,b,mid);
      init(right,mid+1,e);

      int comp=min(tree[left].area,tree[right].area)*2;
      if(comp>tree[left].area&&comp>tree[right].area)
      {
          tree[node].area=comp;
          //tree[node].length=min(tree[left].length,tree[right].length);
          //tree[node].width=tree[left].width+tree[right].width;
          printf("update%d\n\n",tree[node].area);


      }

    else if(comp<=tree[left].area||comp<=tree[right].area)
          {

              tree[node].area=(max(tree[left].area,tree[right].area));//*(tree[left].width+tree[right].width);
            printf("update%d\n\n",tree[node].area);
               /*if(tree[left].area>tree[right].area)
                {tree[node].length=tree[left].length;
                tree[node].width= tree[left].width;
                }
                else
                {
                    tree[node].length=tree[right].length;
                tree[node].width= tree[right].width;

                }*/

          }
 }
