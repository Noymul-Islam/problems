#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
  int cases,follow;
  while(scanf("%d",&cases)==1)
  {

      for(follow=1;follow<=cases;follow++)
      {
          int  lower ,upper,i,j,m=0,n,c;


           scanf("%d %d",&lower,&upper);
           for(i=lower;i<=upper;i++)
           {
              c=0;
              n=sqrt(i);
              for(int k=1;k<=n;k++)
              {
                  if(i%k==0)
                  {
                    c++;

                    if(i/k==k)
                      continue;
                       else
                        c++;



                  }


              }
              if(c>m)
              {
                  m=c;
                  j=i;


              }



           }
 printf("Between %d and %d, %d has a maximum of %d divisors.\n",lower,upper,j,m);

      }
  }
    return 0;
}
