#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<map>
using namespace std;
map<int,int>mp;

int main()
{int n;
while(scanf("%d",&n)==1)
{
    int a[n],b[n],c[n],d[n];
  int  num=1;
  int solution=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];



    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        int x=a[i]+b[j];
        if(mp.find(x)==mp.end()){

            mp[x]=num++;
        }

    }
    for(int i=0;i<n-1;i++)
         for(int j=i+1;j<n;j++)
    {

        int x=c[i]+d[j];

        if(mp.find(x)==mp.end())
            solution++;

    }
     mp.clear();
     cout<<solution<<endl;

}



    return 0;
}
