#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<sstream>

using namespace std;
/*If this code works, than it is my code.Otherwise, I dont know who the hell wrote it!!!"*/
 int main()
{
    long long int t,cs=1;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int k=0;

        long long int odd,even;
        if(n%2!=0)
        {
            printf("Case %lld: Impossible\n",cs++);
            continue;

        }
              else
        {
            for(long long int i=2;i<=n;i=i+2)
            {
                if(n%i==0)
                {
                    if((n/i)%2!=0)
                    {
                        k++;
                        even=i;
                        odd=n/i;
                        break;

                    }

                }


            }

            printf("Case %lld: %lld %lld\n",cs++,odd,even);
        }

          if(!k)
             printf("Case %lld: Impossible\n",cs++);
    }
    return 0;
}
