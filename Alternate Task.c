#include<stdio.h>

int main()
{
    int a,k=1;

    while(scanf("%d",&a)==1)
    {

        if(a==0)
             break;
if(a==1)
{
    printf("Case %d: %d\n",k,a);
  k++;

}
else
{


        int sum=0,SUM,i,j,m,n=0,c,b;

         for(b=1;b<a;b++)
         {
             if(b==1)
                  sum=b;
             else
             sum=b+1;

              for(c=2;c<=(b/2);c++)
              {


                  if(b%c==0)
                     sum=sum+c;
                     if(sum>a)
                         break;




              }
            if(sum==a)
            {
                m=b;
                n++;

            }



         }
         if(n==0)
              {printf("Case %d: -1\n",k);
     k++;}
         else
         {


        printf("Case %d: %d\n",k,m);
            k++;
         }
}
    }

    return 0;
}
