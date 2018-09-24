





    #include<cstdio>
    #include<iostream>
    #include<vector>
    #include<set>
    #include<cstring>
    #include<cmath>
    #include<map>
    #include<algorithm>
    using namespace std;

    int find (int r);
    long long mst(int n);
    int par[100000];
    struct edge
    {
    int u, v, w;

    };

    vector<edge>e;
    bool comp (edge p, edge q)
    {
    return (p.w < q.w);
    }
    int main()
    {
    int n, m;
    while(scanf("%d %d", &n, &m) == 2)
    {
    //getchar();
    if(m == 0 && n == 0)
    break;

    map<string, int>mp;
    set<int>S;
    int assign = 0;
    char ch[15], ch1[15];

    for(int i = 0; i < n; i++ )
    {
    char ch[15];
    scanf(" %s", ch);
    if(mp.find(ch) == mp.end())
    mp[ch] = assign++;
    }

    for(int i = 0; i < m; i++)
    {
    edge data;
    int p;
    scanf(" %s %s %d", ch, ch1, &p);
    data.u = mp[ch];
    data.v = mp[ch1];
    data.w = p;
    e.push_back(data);

    }
    char s1[16];
    scanf(" %s", s1);
    // if(m == 0 && n > 1)
    // {
    // printf("Impossible\n");
    // continue;
    // }
    // else if(m == 0 && n == 1)
    // {
    // printf("0\n");
    // continue;
    // }
    long long res = mst(n);
    if(res == -1)
    printf("Impossible\n");
    else
    printf("%lld\n", res);
    // for(int i = 0; i < n; i++)
    // S.insert(par[e[i].u]);
    // if(S.size() > 1)
    // printf("Impossible\n");
    // else
    // printf("%lld\n", res);
    S.clear();
    mp.clear();
    e.clear();
    }
    return 0;
    }
    long long mst(int n)
    {
    int count = 0;
    long long s = 0;
    for(int i = 0; i < n; i++)
    par[i] = i;
    sort(e.begin(), e.end(), comp);
    for(int i = 0; i < (int)e.size(); i++)
    {
    int u = find(e[i].u);
    int v = find(e[i].v) ;
    // printf("(%d, %d, %d) (%d, %d)\n", e[i].u, e[i].v, e[i].w, u, v);
    if(u != v)
    {
    count++;
    par[u] = v;
    s = s + e[i].w;
    if(count == n - 1)
    break;
    }
    }
    if(count == n - 1)
    return s;
    return -1;
    }
    int find(int r)
    {
    if(par[r] == r)
    return r;
    return par[r] = find(par[r]);
    }


