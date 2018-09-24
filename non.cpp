


//problem 429 (Word Transformation)

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



#define MAXX 11

using namespace std;


 map<string, vector<string> >  graph[MAXX];
 vector<string>cache[MAXX];
 map<string, bool> visited;
 map<string, int> distances;


bool oneCharacterChange(string a, string b)
{
    int len = a.SZ;
    int count = 0;
    loop(i, len)
    {
        if(a[i] != b[i]) count++;
    }

    return count == 1;
}


void explode(string inp, string &a, string &b)
{
    int len = inp.SZ;
    loop(i, len)
    {
        if(inp[i]==' ')
        {
            a = inp.substr(0, i);
            b = inp.substr(i+1);
            return;
        }
    }
}



int bfs(string a, string b)
{
    if(a==b) return 0;
    string temp;
    int len;
    int len2;
    queue<string> Q;
    Q.push(a);
    visited[a] = true;
    while(true)
    {
        a = Q.front();
        len = a.SZ;
        len2 = graph[len][a].SZ;


        loop(i, len2)
        {
            temp = graph[len][a][i];
            if(temp == b)
            {
                return distances[a] + 1;
            }

            if( ! visited[temp] )
            {
                distances[temp] = distances[a] + 1;
                Q.push(temp);
                visited[temp] = true;
            }
        }
        Q.pop();
    }


}




int main()
{


    bool blank = false;


    string a, b;


    int cases;
    getint(cases);
    string s;
    int len;
    string tempString;

    bool flag;

    while(cases--)
    {
        loop(i, MAXX)
        {
            graph[i].clear();
            cache[i].clear();
        }


        if(blank)
        {
            printf("\n");
        }
        blank = true;


        while(true)
        {
            flag = false;
            cin>>s;
            if(s=="*") break;
            len = s.SZ;

            loop(i, cache[len].SZ)
            {
                tempString = cache[len][i];
                if(oneCharacterChange(tempString, s))
                {
                    graph[len][tempString].pb(s);
                    graph[len][s].pb(tempString);
                }
                else if(tempString == s)
                {
                    flag = true;
                }
            }

            if( ! flag)
            {
                cache[len].pb(s);
            }
        }

        cin.ignore();




        while(true)
        {
            getline(cin, s);
            if(s=="")
            {
                break;
            }

            explode(s, a, b);
            distances.clear();
            visited.clear();
            cout<<s<<" "<<bfs(a, b)<<endl;

        }



    }



    return 0;
}
