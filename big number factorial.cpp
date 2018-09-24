#include<cstdio>
#include<cstring>

using namespace std;
char f[70000];
 char factorial[100001][100000];
  void fac()
  {
      int k;
       strcpy(f,"1");
       for(k=2;k<=100000;k++)
       {
           int cin,sum,i;
            int len=strlen(f);
             cin=0;
              i=0;
              while(i<len)
              {
                  sum=cin+ (f[i]-'0')*k;
                  f[i]=(sum%10)+'0';
                   i++;
                     cin=sum/10;

              }
              while(cin>0)
              {
                  f[i++]=(cin%10)+ '0';
                   cin=cin/10;

              }
              f[i]='\0';
              for(int j=0;j<i;j++)
                factorial[k][j]=f[j];
                  factorial[k][i]='\0';


       }

  }


  int main()
  {
      factorial[0][0]='1';
       factorial[1][0]='1';
        int n;
         fac();
         while(scanf("%d",&n)==1)
         {

             int len= strlen(factorial[n]);
              printf("%d!\n",n);
              for(int  i=len-1;i>=0;i--)
                 printf("%c",factorial[n][i]);
                  printf("\n");
         }

  }
