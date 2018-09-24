#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[],int size);
int main()
{
 int arr[]={1,1,2,2,3,0,4};
 int size=sizeof(arr)/sizeof(arr[0]);
 //printf("%d\n",size);
 duplicate(arr,size);
return 0;
}
void duplicate(int arr[],int size)
{
    //index++;
    set<int>s;
    map<int,int>mp;
    for(int i=0;i<size;i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=1;
        }
        else{
         s.insert(arr[i]);
        }

    }
    for(set<int>:: iterator it=s.begin();it!=s.end();it++)
          cout<<*it<<endl;
    //printf("%d\n",index);

}
