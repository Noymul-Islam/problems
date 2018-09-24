#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
using namespace std;

char ch[501];
 vector<int>V[501];

void seive()
{
    int m,n,root;
      memset(ch,'1',sizeof(ch));
    root=sqrt(500);
      ch[0]='0';
       ch[1]='0';
       ch[2]='1';
         for(int i=4;i<=500;i=i+2)
              ch[i]='0';

for(int i=3;i<=root;i=i+2)
{

  if(ch[i]=='1')
  {


    for(int j=3;j*i<=500;j=j+2)
    {
        ch[i*j]='0';

    }
  }
}

}

void factor()
{
    //int i,j,m,n;
    V[0].push_back(0);
    V[1].push_back(0);
   // printf("1");
    for(int i=2;i<=500;i++)
    {
//printf("1");
        //int i=sqrt(i)+1;

        for(int j=2;j<=i;j++)
        {
            //printf("1");

            if(ch[j]=='1')
            {
                int ans=0;
             int  num=1;
                while(1)
                {
                    int count;
                    num=num*j;
                    count=i/num;
                    if(count==0)
                           break;
                    ans=ans+count;
                    //continue;
                    //printf("1");
                }
   V[i].push_back(ans);

            }



        }


    }

}
int main()
{
    seive();
    factor();

 //8 freopen("cat.txt","w",stdout);

    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
              break;
 int t=1,c=0;
       printf("%3d! =",n);
       for(int i=0;i<V[n].size();i++)
       {
           //printf("1\n");
     if(t<=15)
           {printf("%3d",V[n][i]);
           t++;}

 else if(t>15&&c==0)
 {
     c++;
     printf("\n");
     printf("%9d",V[n][i]);

 }
 else
    printf("%3d",V[n][i]);

       }
       printf("\n");

    }
    return 0;
}
/*
  5! =  3  1  1
 53! = 49 23 12  8  4  4  3  2  2  1  1  1  1  1  1
        1
*/
