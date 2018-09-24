#include<cstdio>
#include<cmath>
#include<map>
#include<cstring>

using namespace std;

int main()
{
    map<int,int>mymap;
    int input[]={-102,1,134567,-102,66666666,1,-102,2};

    int assign=0, compress[100],c=0,n=sizeof(input);
    for(int i=0;i<n;i++)
    {
        int x=input[i];
        if(mymap.find(x)==mymap.end())
        {
            mymap[x]=assign;
            printf("mapping %d with %d\n",x,assign);
            assign++;
        }
        x=mymap[x];
        compress[c++]=x;

    }

    for(int i=0;i<n;i++)
              printf("%d  ",compress[i]);
}
