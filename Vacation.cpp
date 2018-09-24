#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

char c[200][200],x[200],y[200];
int mat[200][200],number=0,i,j,m,n;

 void lcs();
 void print(int i, int j);
int main()
{
      int k=1;
    while(gets(x))
    {
        if(x[0]=='#')
              break;
         gets(y);
       lcs();
       print(m,n);
       printf("Case #%d: you can visit at most %d cities.\n",k++,number);
       number=0;

    }


    return 0;
}
void lcs()
{
    m=strlen(x);
    n=strlen(y);
    for( i=0;i<=m;i++)
         mat[0][i]=0;
    for( i=0;i<=n;i++)
         mat[i][0]=0;

    for( i=1;i<=m;i++)
         for( j=1;j<=n;j++)
    {
        if(x[i-1]==y[j-1])
        {
            mat[i][j]=mat[i-1][j-1]+1;
            c[i][j]='d';
        }
        else if(mat[i-1][j]>mat[i][j-1])
        {
            mat[i][j]=mat[i-1][j]+0;
            c[i][j]='u';
        }
        else
        {mat[i][j]=mat[i][j-1]+0;
        c[i][j]='l';


        }


    }
}
void print(int i,int j)
{

    if(i==0||j==0)
           return ;
    if(c[i][j]=='d')
    {
        number++;
        print(i-1,j-1);


    }
    else if(c[i][j]=='u')
    {
        print(i-1,j);

    }
    else
    {

        print(i,j-1);
    }

}
