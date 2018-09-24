#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int>v;
int ar[50000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        memset(ar,0,sizeof(ar));
        ar[0]=1;
        cin>>n;
        cin>>p;
int sum=0;
        v.push_back(0);
        for(int i=0;i<p;i++)
        {
            int k;
            cin>>k;
            sum=sum+k;
             int l=v.size();
            for(int j=0;j<l;j++)
            {
                ar[k+v[j]]=1;
                v.push_back(k+v[j]);

            }


        }
        //for(int i=0;i<=sum;i++)
          //   printf("%d\n",ar[i]);
        if(ar[n]==1)
             printf("YES\n");
        else
            printf("NO\n");

    v.clear();
    }

    return 0;
}
