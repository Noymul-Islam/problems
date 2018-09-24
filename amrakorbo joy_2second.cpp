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

{int t;
cin>>t;int cs=1;
while(t--)
{
    long long int a,b,c,l;
    cin>>a>>b>>l;
    long long int res=__gcd(a,b);
    long long int lcm=(a*b)/res;
    if(l%lcm==0)
    {
        long long int ans=l/lcm;
        printf("Case %d: %lld\n",cs++,ans);

    }
    else
        printf("Case %d: impossible\n",cs++);


}

    return 0;
}
