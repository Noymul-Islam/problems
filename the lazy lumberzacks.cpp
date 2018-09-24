#include<stdio.h>

int main()
{
    int a,b;

    while(scanf("%d",&a)==1)

    {
     for(b=1;b<=a;b++)

     {

         int c[3],i,j,m,n,s;

         for(i=0;i<3;i++)
         {

             scanf("%d",&c[i]);
         }

         for(i=0;i<2;i++)
         {

             for(j=i+1;j<=2;j++)
             {

                 if(c[i]>c[j])
                 {

                     m=c[i];
                     c[i]=c[j];
                     c[j]=m;




                 }


             }

         }


       if((c[0]+c[1])<=c[2])

         printf("Wrong!!\n");

       else
         printf("OK\n");



     }





    }


    return 0;
}
