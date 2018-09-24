#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

vector< int >List,result;
int tracks,Max,N;
int length[25];

void back_track(int i,int sum);

int main()
{
int i;

while(scanf("%d",&N)!=EOF)
{
List.clear();
result.clear();
scanf("%d",&tracks);

for(i=0;i<tracks;++i)
scanf("%d",&length[i]);

Max=0;

back_track(0,0);

for(i=0;i<result.size();++i)
printf("%d ",result[i]);
printf("sum:%d\n",Max);
}
return 0;
}
void back_track(int i,int sum)
{
if(i==tracks)
{
if(sum>Max && sum<=N)
{
Max=sum;
result=List;
}
return ;
}

List.push_back(length[i]);

back_track(i+1,sum+length[i]);

List.pop_back();

back_track(i+1,sum);

return ;

}
