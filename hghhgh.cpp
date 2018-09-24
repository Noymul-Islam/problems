#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
#define size 20000000

char ch[size];
int res[107450][2];
void seive()
{
    int root,i,j,m=0;
    char z,x;
    memset(ch,'1',sizeof(ch));
    root=sqrt(size);
    ch[0]='0';
    ch[1]='0';
    for(i=2;i<=root;i++)
    {
        if(ch[i]=='1')
        {
            for(j=2;i*j<=size;j++)
                ch[i*j]='0';

        }


    }
    for(i=3;i<=size;i++)
    {
        if(ch[i]=='1'&&ch[i+2]=='1')
        {
            m++;
            res[m][0]=i;
            res[m][1]=i+2;

        }


    }

}

int main()
{
    seive();
    int n;

    while(scanf("%d",&n)==1)
    {

        printf("(%d, %d)\n",res[n][0],res[n][1]);




    }



return 0;
}

