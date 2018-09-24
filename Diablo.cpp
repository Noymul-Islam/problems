#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
#include<stack>

using namespace std;
vector<int>v;

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        printf("Case %d:\n",cs++);
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            v.push_back(a);

        }
        getchar();
        char s[10];
        int num;
        while(q--)
        {
            scanf("%s",s);
            if(s[0]=='a')
            {
                scanf("%d",&num);
                v.push_back(num);

            }
            else if(s[0]=='c')
            {

                int index;
                scanf("%d",&index);
                if(index>v.size())
                {
                    printf("none\n");

                }
                else
                {
                    int ans=v[index-1];
                    printf("%d\n",ans);
                    v.erase(v.begin()+(index-1));

                }

            }

        }

         v.clear();
    }


    return 0;
}
