#include<cstdio>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;
void Union(int a, int b);
int find(int r);
int parent[500000];
int main()
{
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        int m ,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++)
        {
            parent[i]=i;

        }
        for(int i=1;i<=n;i++)
        {

            int x,y;
            cin>>x>>y;
            Union(x,y);



        }
         int arr[500000],max=0;
          memset(arr,0,sizeof(arr));
         for(int i=1;i<=m;i++)
         {
             int k= find(i);
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

void Union(int a,int b)
{

    if(find(a)!=find(b))
       parent[find(b)]=find(a);

}
int find(int r)
{
    if(parent[r]==r)
      return r;
      else
      return parent[r]=find(parent[r]);


}
