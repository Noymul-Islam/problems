#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
#define inf 99999999
int graph[26][26];

struct name
{
    char ch[50];

} a[50];
struct track
{
    int sum;
    int position;

} b;

int main()
{

    int n,m,cases=1;
    while(scanf("%d %d",&n,&m)==2)
    {
        getchar();
        if(n==0&&m==0)
            break;

        for(int i=1; i<=25; i++)
            for(int j=1; j<=25; j++)
            {
                if(i==j)
                    graph[i][j]=0;
                else

                    graph[i][j]=inf;


            }


        char ch1[50];
        for(int i=1; i<=n; i++)
        {
            gets(ch1);

            strcpy(a[i].ch,ch1);
           //  puts(a[i].ch);
        }
        int p,q,w;

        for(int i=0; i<m; i++)
        {
           scanf("%d %d %d",&p,&q,&w);
            if(graph[p][q]>w)
            {

                graph[p][q]=w;
                graph[q][p]=w;

            }

        }
       // printf("1");
        for(int k=1; k<=n; k++)
            {
                  //printf("11");
                for(int i=1; i<=n; i++)
            {
                //printf("p\n");
                for(int j=1; j<=n; j++)
               {

                    if(graph[i][j]>(graph[i][k]+graph[k][j]))
                        graph[i][j]=(graph[i][k]+graph[k][j]);
                }


            }
            }
        b.sum=9999999;
          //printf("%d\n",b.sum);
        for(int i=1; i<=n; i++)
        {
            int tot=0;
            for(int j=1; j<=n; j++)
            {
                if(graph[i][j]==inf)
                   continue;
                tot=tot+graph[i][j];

            }
            // printf("%d\n",tot);
            if(tot<b.sum)
            {
                b.sum=tot;
                b.position=i;

            }
        }

        printf("Case #%d : %s\n",cases++,a[b.position].ch);


    }
    return 0;
}

