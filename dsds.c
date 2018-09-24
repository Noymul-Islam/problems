#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

using namespace std;

int arr [100000 + 10];

int main ()
{
    int testCase; scanf ("%d", &testCase);
    int cases = 0;

    while ( testCase-- ) {
        int n; scanf ("%d", &n);

        arr [0] = 0;

        for ( int i = 1; i <= n; i++ ) scanf ("%d", &arr [i]);

        int maxi = INF_MIN;

        for ( int i = 1; i <= n; i++ ) {
            int diff = arr [i] - arr [i - 1];
            if ( diff > maxi ) maxi = diff;
        }

        int res = maxi;

        for ( int i = 1; i <= n; i++ ) {
            int diff = arr [i] - arr [i - 1];
            if ( diff == maxi ) maxi--;
            else if ( diff > maxi ) { res++; break; }
        }

        printf ("Case %d: %d\n", ++cases, res);
    }

	return 0;
}
