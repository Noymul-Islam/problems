#include<stdio.h>
#include<math.h>

int main()
{
   int  a,b=0,c=0,d,left,right,mid,i,j;
   scanf("%d",&a);
   int height[a];
   for(i=0;i<a;i++)
      scanf("%d",&height[i]);
      scanf("%d",&d);
      int q[d];
      for(i=0;i<d;i++)
        scanf("%d",&q[i]);

        for(i=0;i<d;i++)
        {

            if(q[i]<=height[0])
                b++;
               else if(q[i]=>height[a-1])
                  c++;
              if(b!=0&&c==0)
              {
                  if(q[i]<height[0])
                  printf("X %d\n",height[0]);
                  else
                    printf("X %d\n",height[1]);
              }
              else if(b==0&&c!=0)
              {
                  if(q[i]>height[a-1])
                  printf("%d X\n",height[a-1]);
                  else
                   printf("%d X\n",height[a-2])

              }




        }



}
