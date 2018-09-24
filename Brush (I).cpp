#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
 int t,cs=1;
scanf("%d",&t);
while(t--){
 int n;
 int sum=0,dust;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
   cin>>dust;
  if(dust>0)
sum+=dust;

}

printf("Case %d: %d\n",cs++,sum);

}

return 0;}
