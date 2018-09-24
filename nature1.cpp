#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;
void Union(int a, int b);
int find(int r);

int parent[5000];
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        map<string,int>mymap;
        if(n==0&&m==0)
           break;
  for(int i=1;i<=n;i++)
   {
       string s;
       parent[i]=i;
       cin>>s;
       if(mymap.find(s)==mymap.end())
          mymap[s]=i;



   }
   for(int i=0;i<m;i++)
   {
       string s1,s2;
       cin>>s1>>s2;
       int a=mymap[s1];
        int b=mymap[s2];

        Union(a,b);


   }
   int arr[5000];
    memset(arr,0,sizeof(arr));
     int max=0;
   for(int i=1;i<=n;i++)
   {

    int k=find(i);
    arr[k]++;
    if(arr[k]>max)
    {
        max=arr[k];

    }




   }
     cout<<max<<endl;

    }

    return 0;
}
void Union(int a, int b)
{
    if(find(a)!=find(b))
          parent[find(b)]=find(a);

}
int find(int r)
{

    if(parent[r]==r)
       return r;
       else
       return (parent[r]=find(parent[r]));

}
