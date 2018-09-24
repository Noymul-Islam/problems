#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<stack>


#define loop(i, n) for(int i=0; i<n; i++)
#define loopfrom1(i, n) for(int i=1; i<n; i++)
#define mem(array, value) memset(array, value, sizeof(array))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define pb(a) push_back(a)
#define SZ size()
#define getint(n) scanf("%d", &n)
#define pi acos(-1.0)
#define inf 536870912         // 1<<29
#define debug cout<<"ok"<<endl
#define ll long long int
#define mod(a) (a>0?a:-a)
#define Read(filename) freopen(filename, "r", stdin)


#define f(x) (x?x:1)

using namespace std;



map<string, string> graph;
map<string, int> counting;



string find(string node)
{
    if(graph[node] == "")
    {
        return node;
    }
    return graph[node] = find(graph[node]);
}


int join(string node1, string node2)
{
    string u = find(node1);
    string v = find(node2);
    if(u != v)
    {
        graph[u] = v;
        counting[v] = f(counting[v]) + f(counting[u]);
        return counting[v];
    }
    return counting[u];
}


int main()
{
    //Read("11503 - Virtual <span class="skimlinks-unlinked">Friends.txt</span>");
    int kases, F;
    string str1, str2;
    getint(kases);
    while(kases--)
    {
        <span class="skimlinks-unlinked">graph.clear</span>();
        <span class="skimlinks-unlinked">counting.clear</span>();
        getint(F);
        while(F--)
        {
            cin>>str1>>str2;
            cout<<join(str1, str2)<<endl;

        }
    }

    return 0;
}
