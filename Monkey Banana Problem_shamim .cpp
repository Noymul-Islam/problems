///////////////////
// Shamim Ehsan //
// SUST CSE 12 //
// 2012331035 //
///////////////////
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<deque>
#include<algorithm>
#define PI (2* acos(0))
#define push_back pb
using namespace std;
//int X[]= {0,0,1,-1};
//int Y[]= {-1,1,0,0};
//int X[]= {0,0,1,1,1,-1,-1,-1};
//int Y[]= {-1,1,0,1,-1,0,1,-1};
bool comp(int a,int b)
{
return a>b;
}
int main()
{
int t,n,dist=0,temp,temp2,arr[100000];
scanf("%d",&t);
for(int cs=1;cs<=t;cs++)
{
int in=0;

scanf("%d",&n);
scanf("%d",&arr[0]);
dist=arr[0];
for(int i=1;i<n;i++)
{
scanf("%d",&arr[i]);
if(arr[i]-arr[i-1]>dist)
dist=(arr[i]-arr[i-1]);

}
int flag=0;
if(n==1)
{
printf("Case %d: %d\n",cs,dist);
continue;

}
for(int i=dist;i<=1000000000;i++)
{
temp=i;
temp2=i;
if(flag)
break;
for(int j=1;j<n;j++)
{
if(arr[j]-arr[j-1]>temp)
break;
if(arr[j]-arr[j-1]==temp)
temp--;
if(j==n-1)
{
printf("Case %d: %d\n",cs,temp2);
flag=1;
dist=0;
break;
}
}

}
}
return 0;
}
