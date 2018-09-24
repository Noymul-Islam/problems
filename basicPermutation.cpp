#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
vector<int>result;
int n;

void call(int taken[])
{
    if(result.size()==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",result[i]);
        }
        printf("\n");
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            result.push_back(i);
            call(taken);
            result.pop_back();
            taken[i]=0;
        }
    }
}
int main()
{

    scanf("%d",&n);
    int taken[n];
    memset(taken,0,sizeof(taken));
    call(taken);
    return 0;
}
