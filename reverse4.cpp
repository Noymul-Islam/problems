#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[],int size)
{
    map<int,int>mp;
    set<int>s;
    for (int i=0;i<size;i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=1;
        }
        else
        {
            s.insert(arr[i]);
        }

    }
    for(set<int>:: iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

}
int main()
{
    int arr[]={1,1,2,3,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);

    return 0;
}
