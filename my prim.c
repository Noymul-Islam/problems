#include<stdio.h>
#include<math.h>
 #define size 1000000
int arr[size];

void seive()
{

    int i,j,m,n,root;
    for(i=2;i<size;i++)
      arr[i]=1;

      root=sqrt(size);
      for(i=2;i<=root;i++)
      {
          if(arr[i]==1)
          {

              for(j=2;j*i<=size;j++)
              {
                  arr[i*j]=0;

              }

          }
      }
}

int main()
{
    int n,m;
    seive();
    while(scanf("%d",&n)==1)
    {

        if(n==0)
              break;
        if(arr[n]==1)
             printf("prime\n");
        else
             printf("not prime\n");

    }

    return 0;
}
