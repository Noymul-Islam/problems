#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007

int arr[25],total,sum;
int memo[2000+10][25];

int func(int psum, int cnt)
{
    if(cnt>total)
        return 0;
    if(psum==sum/2)
        return 1;
    if(memo[psum][cnt]!=-1) return memo[psum][cnt];
    int ret=0;
    ret=ret | func(psum+arr[cnt],cnt+1);
    ret=ret | func(psum,cnt+1);

    return memo[psum][cnt]=ret;
}
int main()
{
    string line;
    int t,num;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,line);
        istringstream ss(line);
        int cnt=0;
        sum=0;
        SET(memo);
        while(ss>>num)
        {
            arr[cnt++]=num;
            sum+=num;
        }
        total=cnt-1;

        if(sum%2==0)
        {
            if(func(0,0))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
return 0;
}
