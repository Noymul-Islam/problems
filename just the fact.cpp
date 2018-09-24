#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

char f[5000];
  char factorial[1000][5000];

  void fac();
   int main()
   {
       factorial[0][0]='1';
        factorial[1][0]='1';
       fac();
       int n;
       while(scanf("%d",&n)==1)
       {
           int m;
           char cp;
            m=strlen(factorial[n]);

            for(int i=0;i<m-1;i++)
            {
                if(factorial[n][i]!='0')
                  {
                   cp=factorial[n][i];
                      break;
                  }
                  printf("%5d -> %c\n",n,cp);
            }




       }


       return 0;
   }
   void fac()
   {
       strcpy(f,"1");
       for(int k=2;k<=10010;k++)
       {

           int sum,cin,i,j;
            cin=0;
              i=0;
              int len=strlen(f);

           while(i<len)
           {
               sum=cin+(f[i]-'0')*k;
               f[i]=(sum%10)+'0';
               cin=sum/10;
                 i++;


           }
           while(cin>0)
           {
               f[i++]=cin/10+'0';
               cin=cin/10;

           }
           f[i]='\0';

           for(j=0;j<i;j++)
           factorial[k][j]=f[j];

           factorial[k][i]='\0';
       }

   }

