#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
using namespace std;
/*int xx[]= {1,-1,0,0};
int yy[]= {0,0,1,-1};
int XX[]= {1,-1,0,0,-1,-1,1,1};
int YY[]= {0,0,1,-1,1,-1,1,-1};*/
char ar[1010];
void seive()

{
    int root=sqrt(1010);
    memset(ar,'1',sizeof(ar));

    ar[0]='0';
    ar[1]='0';

    for(int i=2; i<=root; i++)
    {
        if(ar[i]=='1')
        {

            for(int j=2; i*j<=1010; j++)
            {
                ar[i*j]='0';

            }


        }


    }


}

int inter[1010];
int main()

{
    seive();
    memset(inter,0,sizeof(inter));

    for(int i=4; i<=1010; i++)
    {
        //printf("y");
        int p=i;
        int num=sqrt(i);
        int cont=0;

        for(int j=2; j<=num; j++)
        {
            if(ar[j]=='1')
            {

                int k=0;

                if(p%j==0)
                {

                    while(p%j==0)
                    {
                        p=p/j;
                        cont++;


                    }

                    if(p==1&&cont>=2)
                        inter[i]=1;

                    break;

                }
            }
        }

    }

    for( int i=4; i<1010; i++)
    {
      //  printf("2");
        if(inter[i])
        {
            for(int j=i; j<=1010; j++)
            {
                if(inter[j])
                {
                    inter[i+j]=1;


                }


            }

        }
    }
    //printf("1");
    int z;
    //cont=0;
    //cin>>z;
    scanf("%d",&z);
    //printf("oj");
    while(z--)
    {
        // printf("0");
        int cont=0;
        int a,b;

        //cin>>a>>b;
          scanf("%d %d",&a,&b);
        for(int i=a; i<=b; i++)
        {
          //  printf("%d\n",inter[i]);
            if(inter[i])
                cont++;


        }

        printf("%d\n",cont);


    }


    return 0;
}

