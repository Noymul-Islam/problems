#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int number;
    while(scanf("%d",&number)==1)
    {
        int i,j,chimp[number];
        for(i=0;i<number;i++)
            scanf("%d",&chimp[i]);

        int height;
        scanf("%d",&height);
        int k[height];
        for(i=0;i<height;i++)
             scanf("%d",&k[i]);
        for(i=0;i<height;i++)
        {

            int p=k[i];
            for(j=0;j<number;j++)
            {
                if((p==chimp[j])&&(j<number-1)&&j!=0)
                     printf("%d %d\n",chimp[j-1],chimp[j+1]);
                else if((chimp[j]>p&&j==0)||((chimp[j]>p)&&(chimp[j-1]==p)))
                     printf("X %d\n",chimp[j]);
                else if((chimp[j]<p&&j==0)||((chimp[j]<p)&&(chimp[j+1]==p)))
                     printf("%d X\n",chimp[j]);
                else if(chimp[0]==p && chimp[number-1]==p)
                      printf("X X\n");


            }


        }

    }
}
