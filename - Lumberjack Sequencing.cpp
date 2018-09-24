#include<stdio.h>

int main()

{

    int a,b;

    while(scanf("%d",&a)==1)
    {
        printf("Lumberjacks:\n");


        for(b=1;b<=a;b++)
        {


            int c[10],i,j,m=0,n=0,k=0;

            for(i=0;i<10;i++)

            {
                scanf("%d",&c[i]);

            }

          for(i=0;i<9;i++)
          {


              if(c[i]>c[i+1])
              {
                  m++;
                  continue;

              }

              else if(c[i]<c[i+1])
              {

                  n++;
                  continue;

              }
              else if(c[i]==c[i+1])

              {

                  k++;
                  continue;


              }





          }
          if(((m+k)==i)||((k+n)==i))
  printf("Ordered\n");

  else

          printf("Unordered\n");



        }



    }

    return 0;
}
