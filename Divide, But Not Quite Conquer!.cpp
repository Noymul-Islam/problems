#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        long long int k=0,c=0,i;
  vector<long long int>v;

  if(n<2||m<2||n<m)
    printf("Boring!\n");
  else

{

        while(n!=1)
        {

            if((n%m)==0)
            {
                 v.push_back(n);
               n=n/m;



            }
            else
            {c++;
            break;}
        }


        if(c!=0)
              printf("Boring!\n");

        else
        {
            v.push_back(1);

            for(i=0;i<v.size();i++)
            {
                if(v[i]!=1)
                      printf("%lld ",v[i]);
                else
                      printf("%lld\n",v[i]);

            }
        }

    }
    }
    return 0;
}
