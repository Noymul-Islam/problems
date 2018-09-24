#include<cstdio>
#include<cmath>

using namespace std;

int main()
{

    int test;
    scanf("%d",&test);
    while(test--)
    {
        int c=0;

        int n;
        scanf("%d",&n);
        if(n%8==7)
              printf("-1\n");
        else
        {


        int root=sqrt(n);
        for(int i=0;i<=root;i++)
        {
            int _i=i*i;
            //int k;
           for(int j=i;j<=root;j++)
           {
               int _j=j*j;
               for(int k=j;k<=root;k++ )
               {
                   int _k=k*k;
                   if(_i+_j+_k==n)
                   {

                       printf("%d %d %d\n",i,j,k);
                       c++;
                       break;
                   }


               }
               if(c>0)
                  break;




           }
           if(c>0)
                      break;


        }

        }
    }
    return 0;
}
