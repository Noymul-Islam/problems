#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<map>

using namespace std;

long long int comp( long long int p, long long int q)
  {
   return p>q;
  }
//413933789280

int main()
{
    long long int  n;
    cin>>n;

     long long int arr[10000];

    long  long  int sqt=sqrt(n);
    //arr[0]=n;
    arr[0]=1;
    int p=2;

    for(int i=1;i<=sqt;i++)
    {

        if(n%i==0)
        {
            if(n==i*i)
              arr[p++]=i;
              else
            {arr[p++]=i;
            arr[p++]=n/i;}

        }


    }
    //cout<<p<<endl;

    sort(arr,arr+p,comp);




    int index=0;
 int c;
    for(int i=0;i<p;i++)
    {
        c=0;



   for(long long int j=2;j<=sqrt(arr[i]);j++)
   {
       //cout<<j<<"pp:"<<endl;
   if(arr[i]%(j*j)==0)
   {
     c++;
    break;
   }
   }
//cout<<"hello"<<endl;

if(c==0)
{     //cout<<"hllo";
    cout<<arr[i]<<endl;
     break;}
        /*if(arr[index]%(arr[i]*arr[i])==0)
        {
          if(arr[i]>1)
        {index++;
         i--;}
        }*/

    }




    return 0;
}
