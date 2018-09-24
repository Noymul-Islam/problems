#include<cstdio>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    long long int a,b;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
             a^=b^=a^=b;
        if(a==0&&b==0)
              break;
       long long  int i,j,m,n,sum=0,c=0,k=0,l;
        for(i=a;i<=b;i++)
        {
            l=0;
            sum=0;
            j=i;
            while(1)
            {if(j==1&&l!=0)
               break;

              if(j%2==0)
              {
                  j=j/2;
                   sum++;

                      l++;
              }

                else
                {
                    j=j*3+1;
                      sum++;
                       int l=0;

                }

            }
            if(sum>c)
            {
                k=i;
                c=sum;
                 sum=0;

            }

        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,k,c);


    }
    return 0;

}
