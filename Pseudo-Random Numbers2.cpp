#include<cstdio>
#include<cstring>
using namespace std;
int main()
{

    long long int z,l,I,M;
    int n=1;
    int ar[10050];

    while(scanf("%lld %lld %lld %lld",&z,&I,&M,&l)==4)
    {

       if(z==0&&I==0&&M==0&&l==0)
          break;
          memset(ar,0,sizeof(ar));
        int sum=1,c=0;

         int k=l;
ar[l]=0;
        while(1)
        {
          l=((z*l)+I)%M;
         ar[l]++;
  if(ar[l]==1)
            sum++;
  else
      break;
             //if(l==k)
              //   break;


        }
       //if(l==k)
       // printf("Case %d: %d\n",n,sum);
        //else
             printf("Case %d: %d\n",n,sum-1);
          n++;


    }
    return 0;
}

