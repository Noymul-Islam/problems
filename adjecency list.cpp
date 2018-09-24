#include<cstdio>
#include<vector>

using namespace std;
#define max 10000
vector<int>edges[max];
vector<int>cost[max];
int main()
{

    int n,e,i,size,j;


    scanf("%d %d",&n,&e);
    for(i=1;i<=e;i++)
    {
        int x,y;

        scanf("%d %d",&x,&y);

        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(y);
        cost[y].push_back(x);
    }
    for(i=1;i<=e;i++)
    {
        size=edges[i].size();
        printf("\nsize:%d\n",size);
     printf("%d\n",i);
        for(j=0;j<size;j++)
            printf("%d ",edges[i][j]);

        printf("\n");


    }

}

