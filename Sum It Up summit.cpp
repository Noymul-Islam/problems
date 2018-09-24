#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
using namespace std;

#define SZ 105
#define SZ2 15

bool flag;
bool colour[SZ2][SZ];
int List[SZ2];
int total,nums;
vector< int >seq;

void back_track(int pos,int level,int sum);

int main()
{
int i,a;

while(scanf("%d %d",&total,&nums)==2 && nums)
{
seq.clear();
flag=false;
memset(colour,0,sizeof(colour));

for(i=0;i<nums;++i)
scanf("%d",&List[i]);

printf("Sums of %d:\n",total);


for(i=0;i<nums;++i)
{
a=List[i];
if(!colour[0][a])
{
//printf("aaaa%d\n",a);
colour[0][a]=1;
seq.push_back(a);
back_track(i,1,a);
seq.pop_back();
memset(colour[1],0,sizeof(colour[1]));
}
}
if(flag==false)
printf("NONE\n");
}
return 0;
}
void back_track(int pos,int level,int sum)
{
if(sum==total)
{
flag=true;

for(int i=0;i<seq.size();++i)
{
if(!i)
printf("%d",seq[i]);
else
printf("+%d",seq[i]);
}
printf("\n");
return ;
}
else if(sum > total)
return ;

for(int i=pos+1;i<nums;++i)
{
int a=List[i];
//printf("a=%d i=%d level=%d\n",a,i,level);
if(!colour[level][a])
{
//printf("bbbbb%d %d %d\n",a,i,level);
colour[level][a]=1;
seq.push_back(a);
back_track(i,level+1,sum+a);
seq.pop_back();
}
}
memset(colour[level],0,sizeof(colour[level]));
return ;
}
//Chat Conversation End

