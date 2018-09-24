#include<stdio.h>

int main()

{
    int a,k=1;


    while(scanf("%d",&a)==1)

    {

        if(a==0)

             break;

        int b[a],c,i,j=0,m=0,n,s;

        for(i=0;i<a;i++)
        {

            scanf("%d",&b[i]);
        }
        for(i=0;i<a;i++)
        {
            if(b[i]==0)
             {


                j++;

             }
            else
            {


                m++;

            }


        }
        n=m-j;



        printf("Case %d: %d\n",k,n);

   k++;
    }


   return 0;
}
