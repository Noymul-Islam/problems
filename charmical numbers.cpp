#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int mod(int x, int y,int z);
char ch[65005];
void seive()
{
    memset(ch,'1',sizeof(ch));
    int root=sqrt(65005);
    ch[0]='0';
    ch[1]='0';
    //ch[2]='1';
    for(int i=2;i<=root;i=i+1)
    {
        if(ch[i]=='1')
        {
            for(int j=2;i*j<=65005;j++)
                  ch[i*j]='0';


        }

    }


}
int main()
{
    //freopen("cat.txt","w",stdout);
     seive();
      int i=-1;
    int charm[100];

    for(int n=3;n<65000;n++)
    {
        int k=1;

        for(int a=2;a<=n-1;a++)
        {

            int c=mod(a,n,n);
            if(c!=a)
                  break;
            else
                k++;

        }
        if(k==n-1)
        {
            if(ch[n]=='0')
              charm[++i]=n;


    }
    }
    for(int j=0;j<=i;j++)
         printf("%d\n",charm[j]);
    return 0;
}

int mod(int x, int y,int z)
{
    if(y==0)
          return 1;
    else
    {

        if(y%2==0)
        {
            int ret=mod(x,y/2,z);
            return (((ret%z)*(ret%z))%z);

        }
        else
            return (((x%z)*(mod(x,y-1,z)%z))%z);
    }

}
