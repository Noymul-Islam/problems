#include<bits/stdc++.h>
//#include<map>
using namespace std;
void findDuplicate(int arr[],int n);
int main()
{
   int arr[]={1,1,2,2,2,3,0,4};
   //printf("%d\n",sizeof(arr));
   int n=sizeof(arr)/sizeof(arr[0]);
   findDuplicate(arr,n);
return 0;
}
void findDuplicate(int arr[],int n)
{
   set<int>s;
   //set<int>::iterator it;
   map<int,int>mp;
   for(int i=0;i<n;i++)
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
   {cout<<*it<<endl;
     it++;
   }
   printf("%d\n",s.size());



}

