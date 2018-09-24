#include<iostream>
    #include<cstdio>
    #include<cstdlib>
    #include<cstring>
    #include<algorithm>
    #include<cmath>
    #include<vector>
    #include<queue>
    #include<deque>
    #include<stack>
    #include<map>
    #include<sstream>
    #include<utility>
    #include<climits>
    #include<fstream>

    using namespace std;


    #define Max 100000
    #define Min -1
    #define lli long long int
    #define psb push_back
    #define pob pop_back
    #define forl(i,n) for(i=1;i<=n;i++)

    struct info
    {
      lli sum;
      lli prop;
    }tree[Max*4 + 7];

    int n , c , f , l , v;

    void init()
    {
      int a;
      for(a=1;a<=n*4;a++)
      {
        tree[a].sum = 0;
        tree[a].prop = 0;
      }
    }

    void update(int node,int b,int e,int i,int j,lli x)
    {
       if(i>e || j<b)
       return ;

       if(b>=i && e<=j)
       {
          tree[node].sum += (e-b+1)*x ;
          tree[node].prop += x;
          return ;
       }
       int left = node*2;
       int right = node*2 + 1;
       int mid = (b+e)/2;

       update(left,b,mid,i,j,x);
       update(right,mid+1,e,i,j,x);

       tree[node].sum = tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop ;


    }

    lli query(int node,int b,int e,int i,int j,lli carry)
    {
      if(i>e || j<b)
      return 0;

      if(b>=i && e<=j)
      return tree[node].sum+carry*(e-b+1);

      int left = node<<1;
      int right = (node<<1) + 1;
      int mid = (b+e)>>1;

      lli s1 = query(left,b,mid,i,j,carry+tree[node].prop);
      lli s2 = query(right,mid+1,e,i,j,carry+tree[node].prop);

      return s1+s2;
    }

    int main()
    {
     int t,a,s;
     lli ret;
     scanf("%d",&t);
     a=1;
     while(t--)
     {
        printf("Case %d:\n",a);
        a++;
        scanf("%d %d",&n,&c);
        init();
        while(c--)
        {
          scanf("%d",&s);
          if(s==0)
          {
            scanf("%d %d %d",&f,&l,&v);
            f++;
            l++;
            update(1,1,n,f,l,v);

          }
          else
          {
            scanf("%d %d",&f,&l);
            f++;
            l++;
            ret = query(1,1,n,f,l,0);
            printf("%lld\n",ret);
          }
        }
     }
     return 0;

    }
