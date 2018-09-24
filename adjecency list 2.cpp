#include<cstdio>
#include<vector>

using namespace std;

#define max 10000
vector<int>edges[max];
vector<int>in[max];

int main()
{

    int i,j,size,n,e,size1,k;

    scanf("%d %d",&n,&e);

    for(i=1;i<=e;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
        in[y].push_back(x);
    }
    for(i=1;i<=e;i++)
    {
        size=edges[i].size();
        size1=in[i].size();
        for(k=0;k<size1;k++)
        printf("indegree for %d is %d\n",i,in[i][k]);

    printf("out degrees for %d are\n",i);
        for(j=0;j<size;j++)
        printf("%d",edges[i][j]);
        printf("\n");


    }
    return 0;
}
